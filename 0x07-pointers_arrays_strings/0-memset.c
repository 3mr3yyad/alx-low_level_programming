#include "main.h"

/**
 * _memset - main
 * @s: input
 * @b: input1
 * @n: input2
 * Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; n > 0; x++, n--)
	{
		s[x] = b;
	}
	return (s);
}
