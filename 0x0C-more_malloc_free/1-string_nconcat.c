#include "main.h"

/**
 * string_nconcat - main
 * @s1: input1
 * @s2: input2
 * @n: input
 * Return: 0
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int x, y, ls1, ls2;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	for (ls1 = 0; s1[ls1] != '\0'; ls1++)
		;

	for (ls2 = 0; s2[ls2] != '\0'; ls2++)
		;

	c = malloc(ls1 + n + 1);
	if (c == NULL)
	{
		return (NULL);
	}

	for (x = 0; s1[x] != '\0'; x++)
		c[x] = s1[x];

	for (y = 0; y < n; y++)
	{
		c[x] = s2[y];
		x++;
	}
	c[x] = '\0';
	return (c);
}
