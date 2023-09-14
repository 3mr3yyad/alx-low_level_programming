#include "variadic_functions.h"

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * fchar - main
 * @separator: input
 * @l: input
*/

void fchar(char *separator, va_list l)
{
	printf("%s%c", separator, va_arg(l, int));
}

/**
 * fint- main
 * @separator: input
 * @l: input1
*/

void fint(char *separator, va_list l)
{
	printf("%s%f", separator, va_arg(l, int));
}

/**
 * ffloat - main
 * @separator: input
 * @l: input1
*/

void ffloat(char *separator, va_list l)
{
	printf("%s%f", separator, va_arg(l, double));
}

/**
 * fstring - main
 * @separator: input
 * @l: input1
*/

void fstring(char *separator, va_list l)
{
	char *str = va_arg(l, char *);

	switch ((int)(!str))
	case 1:
		str = "(nil)";

	printf("%s%s", separator, str);
}

/**
 * print_all - main
 * @format: f
*/

void print_all(const char * const format, ...)
{
	int x = 0, y;
	char *separator = "";
	va_list l;
	token_t tokens[] = {
		{"c", fchar},
		{"i", fint},
		{"f", ffloat},
		{"s", fstring},
		{NULL, NULL}
	};

	va_start(l, format);

	while (format && format[x])
	{
		y = 0;

		while (tokens[y].token)
		{
			if (format[x] == tokens[x].token[0])
			{
				tokens[y].f(separator, l);
				separator = ", ";
			}
			y++;
		}
		x++;
	}
	printf("\n");
	va_end(l);
}
