#include "main.h"

/**
 * _strdup - main
 * @str: input
 * Return: 0 || Null
 */

char *_strdup(char *str)
{
	int x = 0, y = 0;
	char *c;

	if (str == NULL)
		return (NULL);

	for (; str[y] != '\0'; y++)
		;

	c = malloc(y * sizeof(*str) + 1);

	if (c == 0)
		return (NULL);

	else
	{
		for (; x < y; x++)
			c[x] = str[x];
	}
	return (c);
}
