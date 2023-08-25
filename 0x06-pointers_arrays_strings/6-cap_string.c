#include "main.h"
#include <stdio.h>

/**
 * lc - main
 * @a: input
 * Return: 1 = true, 0 = false
*/

int lc(char a)
{
	return (a >= 97 && a <= 122);
}

/**
 * id - main
 * @a: input
 * Return: 1 = true, 0 = false
*/

int id(char a)
{
	int x;
	char dd[] = " \t\n,;.!?\"(){}";

	for (x = 0; x < 13; x++)
		if (a == dd[x])
			return (1);
	return (0);
}

/**
 * cap_string - main
 * @z: input
 * Return: o
*/

char *cap_string(char *z)
{
	int fd = 1;
	char *o = z;

	while (*z)
	{
		if (id(*z))
			fd = 1;
		else if (lc(*z) && fd)
		{
			*z -= 32;
			fd = 0;
		}
		else
			fd = 0;
		z++;
	}
	return (o);
}
