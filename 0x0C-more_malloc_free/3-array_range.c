#include "main.h"

/**
 * array_range - main
 * @min: input
 * @max: input
 * Return: 0
*/

int *array_range(int min, int max)
{
	int a, b, *p;

	if (min > max)
		return (NULL);

	a = max - min + 1;
	p = malloc(sizeof(int) * a);

	if (!p)
		return (NULL);

	for (b = 0; b < a; b++)
		p[b] = min++;

	return (p);
}
