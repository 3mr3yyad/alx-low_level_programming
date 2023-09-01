#include <stdio.h>

/**
 * main - adds positive numbers
 * @argc: input
 * @argv: input1
 * Return: 0 = success
*/

int main(int argc, char *argv[])
{
	int x = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
				return (printf("Erorr\n"), 1);
		x += atoi(argv[argc]);
	}
	printf("%d\n", x);
	return (0);
}
