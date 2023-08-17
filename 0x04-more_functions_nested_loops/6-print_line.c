#include "main.h"

/**
 * print_line - main
 * @n: int
 * Return: always 0
*/

void print_line(int n)
{
	int lll;

	if (n <= 0)
		_putchat('\n');
	else
	{
		for (lll = 1; lll <= n; lll++)
			_putchar('_');
		_putchar('\n');
	}
}
