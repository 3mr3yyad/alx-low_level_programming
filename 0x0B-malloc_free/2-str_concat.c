#include "main.h"

/**
 * strln - main
 * @s: input
 * Return: a
*/

int strln(char *s)
{
	int a = 0;

	for (; s[a] != '\0'; a++)
		;

	return (a);
}

/**
 * str_concat - main
 * @s1: input
 * @s2: input1
 * Return: c
*/

char *str_concat(char *s1, char *s2)
{
	int b, c, x;
	char *c;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	b = strln(s1);
	c = strln(s2);
	c = malloc((b = c) * sizeof(char) + 1);

	if (m == 0)
		return (0);

	for (x = 0; x <= b + c; x++)
	{
		if (x < b)
			c[x] = s1[x];
		else
			c[x] = s2[x - b];
	}
	c[x] = '\0';

	return (c);
}
