#include "main.h"

/**
 * flip_bits - main 
 * @n: input
 * @m: input1
 * Return: a
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int a = 0;

	while (x)
	{
		if (x & 1ul)
			a++;
		x = x >> 1;
	}
	return (a);
}
