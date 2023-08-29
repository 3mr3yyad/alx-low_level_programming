#include "main.h"

/**
 * print_diagsums - main
 * @a: input
 * @size: input1
 * Return: void
*/

void print_diagsums(int *a, int size)
{
	int x;
	int s = 0;
	int t = 0;

	for (x = 0; x < size; x++)
	{
		s += a[x];
		t += a[size - x - 1];
		a += size;
	}
	printf("%d, ", s);
	printf("%d\n", t);
}
