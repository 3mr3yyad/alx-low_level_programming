#include "function_pointers.h"

/**
 * print_name - main
 * @name: input
 * @f: input1
 * Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
