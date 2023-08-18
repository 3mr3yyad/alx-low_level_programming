#include "main.h"

/**
 * print_square - main
 * @size: function that prints a square, followed by a new line
*/

void print_square(int size)
{
	int rw, clmn;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (rw = 0; rw <= size; rw++)
		{
			for (clmn = 0; clmn <= size; clmn++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
