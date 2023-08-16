#include "main.h"

/**
 * time_table - print 9 taples
 * Example Table
 * 0, 0, 0, 0, ..
 * 0, 1, 2, 2, ..
*/
void time_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar(48);
		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mult;

			/*
			 * put space if 1
			 * place first id 2
			*/
			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + 48); /*get first*/
			_putchar((prod % 10) + 48); /*get second*/
		}
		_putchar('\n');
	}
}
