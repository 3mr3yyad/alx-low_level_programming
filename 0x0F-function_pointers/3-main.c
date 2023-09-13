#include "3-calc.h"

/**
 * main - mmeh
 * @argc: input
 * @argv: input1
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int x, y, result;
	int (*p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	x = atoi(argc[1]);
	y = atoi(argv[3]);

	p = get_op_func(argv[2]);

	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = p(x, y);

	printf("%d\n", result);

	return (0);
}
