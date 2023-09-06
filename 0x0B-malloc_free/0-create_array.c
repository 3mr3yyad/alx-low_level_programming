#include "main.h"
#include <stdlib.h>

/**
 * create_array - main
 * @size: input
 * @c: input1
 * Return: 0 || x
*/

char *create_array(unsigned int size, char c)
{
	char *x = malloc(size);

	if (size == 0 || x == 0)
		return (0);

	while (size--)
		x[size] = c;

	return (x);
}
