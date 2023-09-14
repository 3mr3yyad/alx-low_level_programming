#ifndef VARIADIC_H
#define VARIADIC_H

#include <stdio.h>
#include <stdarg.h>

/**
 * struct token - main
 * @token: input
 * @func: function
 */

typedef struct token
{
	char *token;
	void (*func)(char *, va_list);
} token_t;

#endif
