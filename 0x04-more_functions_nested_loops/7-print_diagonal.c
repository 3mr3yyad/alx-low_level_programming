#include "main.h"

/**
 * print_diagonal - main
 * @n: function that draws a diagonal line on the terminal
*/

void print_diagonal(int n)
{
	int s, spc;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (s = 1; s <= n; s++)
		{
			for (spc = 1; spc <= s; spc++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
