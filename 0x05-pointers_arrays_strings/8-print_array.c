#include "main.h"

/**
 * print_array - main
 * @a: input1
 * @n: input2
 * Return: null
*/

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x != n - 1)
			pritnf("%d, ", a[x]);
		else
			printf("%d", a[x]);
	}
	_putchar('\n');
}
