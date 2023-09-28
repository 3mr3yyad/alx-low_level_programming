#include "main.h"

/**
 * print_binary - main
 * @n: input
*/

void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8, o = 0;

	while (bit)
	{
		if (n & 1L << --bit)
		{
			_putchar('1');
			o++;
		}
		else if (o)
			_putchar('0');
	}
	if (!o)
		_putchar('0');
}
