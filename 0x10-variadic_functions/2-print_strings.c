#include "variadic_functions.h"

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - main
 * @separator: input
 * @n: input1
 * @...: input2
 * Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	int x = n;
	char *c;
	va_list l;

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(l, n);
	while (x--)
	{
		printf("%s%s", (c = va_arg(l, char *)) ? c : "(nil)", x ? (separator ? separator : "") : "\n");
	}
	va_end(l);
}
