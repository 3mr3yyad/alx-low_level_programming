#include "variadic_functions.h"

/**
 * sum_them_all - main
 * @n: input
 * @...: input1
 * Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	int s;
	va_list l;

	va_start(l, n);
	for (x = 0; s = 0; x < n; x++)
		s += va_arg(l, int);

	va_end(l);

	return (s);
}
