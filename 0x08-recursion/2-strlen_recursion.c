#include "main.h"

/**
 * _strlen_recursion - main
 * @s: input
 * Return: @x
*/

int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s > '\0')
	{
		x += _strlen_recursion(s + 1) + 1;
	}
	return (x);
}
