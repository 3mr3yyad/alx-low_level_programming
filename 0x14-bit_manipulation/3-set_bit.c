#include "main.h"

/**
 * set_bit - main
 * @n: input
 * @index: input1
 * Return: 1 = success & -1 = error
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (!(*n |= 1L << index));
}
