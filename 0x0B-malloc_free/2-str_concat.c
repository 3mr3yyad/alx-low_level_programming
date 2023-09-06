#include "main.h"

/**
 * str_concat - main
 * @s1: input
 * @s2: input1
 * Return: 0
*/

char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, d = 0;
	char *z;

	if (s1 == NULL)
		s1 = "\0";

	if (s2 == NULL)
		s2 = "\0";

	while (s1[a])
		a++;
	while (s2[b])
		b++;

	d = a + b;
	z = malloc((sizeof(char) * d) + 1);

	if (z == NULL)
		return (NULL);

	b = 0;

	while (c < d)
	{
		if (c <= a)
			z[c] = s1[c];
		if (c >= a)
		{
			z[c] = s2[b];
			b++;
		}
		c++;
	}
	z[c] = '\0';
	return (z);
}
