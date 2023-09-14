#include "variadic_functions.h"

/**
 * sum_them_all - main
 * @n: input
 * @...: input1
 * Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	int a = 0, x = n;
	va_list y;

	if (n < 1)
	{
		return (0);
	}

	va_start(y, n);

	while (x--)
	{
		a += va_arg(y, int);
	}

	va_end(y);

	return (a);
}
