#include "main.h"

/**
 * print_triangle - main
 * @size: function that prints a triangle, followed by a new line
 * Return: always 0
*/

void print_triangle(int size)
{
	int x, y;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (x = 1; x <= size; x++)
		{
			for (y = 1; y <= size; y++)
			{
				if ((x + y) <= size)
					_putchar(' ');
				else
					_putchar(35);
			}
			_putchar('\n');
		}
	}
}
