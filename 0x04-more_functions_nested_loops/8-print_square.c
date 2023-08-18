#include "main.h"

/**
 * print_square - main
 * @size: function that prints a square, followed by a new line
*/

void print_square(int size)
{
	int rw, clmn;

	for (rw = 1; rw <= size; rw++)
	{
		for (clmn = 1; clmn <= size; clmn++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
