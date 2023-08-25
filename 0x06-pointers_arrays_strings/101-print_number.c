#include "main.h"

/**
 * print_number - main
 * @n: input
 * Return: always 0
*/

void print_number(int n)
{
	unsigned int x;

	x = n;

	if (n < 0)
	{
		_putchar('-');
		x = -n;
	}
	else if (x / 10 != 0)
	{
		_putchar(x / 10);
	}
	_putchar((x % 10) + '0');
}
