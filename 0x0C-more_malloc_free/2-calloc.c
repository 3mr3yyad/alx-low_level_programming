#include "main.h"

/**
 * c - main
 * @s: input
 * @t: input2
 * @a: input3
 * Return: 0
*/

char *c(char *s, char t, unsigned int a)
{
	char *p = s;

	while (a--)
		*s++ = t;

	return (p);
}

/**
 * _calloc - main
 * @nmemb: input
 * @size: input
 * Return: 0
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *x;

	if (size == 0 || nmemb == 0)
		return (NULL);
	x = malloc(sizeof(int) * nmemb);

	if (x == 0)
		return (NULL);

	c(x, 0, sizeof(int) * nmemb);

	return (x);
}
