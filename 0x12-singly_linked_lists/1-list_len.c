#include "lists.h"

/**
 * list_len - main
 * @h: to first node
 * Return: x
*/

size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		h = h->next;
		x++;
	}
	return (x);
}
