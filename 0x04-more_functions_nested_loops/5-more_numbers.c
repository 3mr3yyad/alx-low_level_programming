#include "main.h"

/**
 * more_numbers - main
 * Description: function that prints 10 times the numbers
 * Return: always 0
*/

void more_numbers(void)
{
	int x, lines, z;

	for (lines = 1; lines <= 10; lines++)
	{
		for (z = 0; z <= 14; z++)
		{
			x = z;
			if (z > 9)
			{
				_putchar(1 + 48);
				x = z % 10;
			}
			_putchar(x + 48);
		}
		_putchar('\n');
	}

}
