#include "main.h"

/**
 * print_sign - start
 * @n: print signs
 * Return: 1 = postive, 0 = 0, -1 = negative
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (1);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
