#include <stdio.h>

/**
 * main - all arguments it receives
 * @argc: input
 * @argv: input1
 * Return: always 0
*/

int main(int argc, char const *argv[])
{
	int x = 0;

	while (argc--)
	{
		printf("%s\n", argv[x]);
		x++;
	}
	return (0);
}
