#include "main.h"

/**
 * print_rev - main
 * @s: input
 * Return: reversed
*/

void print_rev(char *s)
{
	int x;

	while (s[x])
		x++;

	while (x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
