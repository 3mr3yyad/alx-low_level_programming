#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - main
 * @n: input
 * @...: input1
 * Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	int s = 0, x = n;
	va_list l;

	if (!n)
		return (0);

	va_start(l, n);
	while (x--)
		s += va_arg(l, int);
	va_end(l);

	return (s);
}
