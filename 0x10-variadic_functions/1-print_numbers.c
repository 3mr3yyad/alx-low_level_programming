#include "variadic_functions.h"

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - main
 * @separator: input
 * @n: input1
 * @...: input2
 * Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int x = n;
	va_list l;

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(l, n);
	while (x--)
	{
		printf("%d%s", va_arg(l, int), x ? (separator ? separator : "") : "\n");
	}
	va_end(l);
}
