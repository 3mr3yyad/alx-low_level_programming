#include "main.h"

/**
 * print_most_numbers - main
 * Description: function that prints the numbers followed by a new line
 * Return: always 0
*/

void print_most_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		if (x == 4 || x == 2)
			continue;
		_putchar(x + 48);
	}
	_putchar('\n');
}
