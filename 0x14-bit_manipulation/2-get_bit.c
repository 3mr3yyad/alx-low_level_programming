#include "main.h"

/**
 * get_bit - main
 * @n: input
 * @index: input
 * Return: bit state or -1
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
