#include "lists.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_listint - main
 * @h: input
 * Return: x
*/

size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		x++;
	}
	return (x);
}
