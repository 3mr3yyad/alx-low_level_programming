#include "lists.h"

/**
 * strlng - main
 * @c: input
 * Return: x
*/

int strlen(char *c)
{
	int x = 0;

	if (!c)
		return (0);

	while (*c++)
		x++;

	return (x);
}

/**
 * print_list - main
 * @h: input
 * Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("[%d] %s\n", strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		x++;
	}
	return (x);
}
