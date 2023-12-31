#include <stdio.h>
#include <stdlib.h>

/**
 * main - minimum number of coins
 * @argc: input
 * @argv: input1
 * Return: 0 = success
*/

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int x, lc = 0, s = atoi(argv[1]);
		int cs[] = {25, 10, 5, 2, 1};

		for (x = 0; x < 5; x++)
		{
			if (s >= cs[x])
			{
				lc += s / cs[x];
				s = s % cs[x];
				if (s % cs[x] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", lc);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
