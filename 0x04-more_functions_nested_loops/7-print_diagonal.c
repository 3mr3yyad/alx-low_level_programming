#include "main.h"

/**
 * print_diagonal - main
 * @n: function that draws a diagonal line on the terminal
*/

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar(95);
			_putchar('\n');
		}
	}
}
