#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: input1
 * @argv: input2
 * Return: 0 = success
*/

int main(int argc, char const *argv[])
{
	int x;

	if (argc == 3)
	{
		x = atoi(argv[1] * atoi(argv[2]);
		printf("%d\n", x);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}