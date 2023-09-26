#include "lists.h"

#include <stdlib.h>

/**
 * find_listint_loop - main
 * @head: head node
 * Return: NULL or end
*/

listint_t *find_listint_loop(listont_t *head)
{
	listint_t *p, *end;

	if (head == NULL)
		return (NULL);

	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);

		for (p = head; p != end; p = p->next)
			if (p == end->next)
				return (end->next);
	}
	return (NULL);
}

/**
 * free_listint_safe - main
 * @h: input
 * Return:lng
*/

size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *pnode;
	size_t lng;
	int loop = 1;

	if (h == NULL || *h == NULL)
		return (0);

	pnode = find_listint_loop(*h);

	for (lng = 0; (*h != pnode || loop) && *h != NULL; *h = next)
	{
		lng++;
		next = (*h)->next;

		if (*h == pnode && loop)
		{
			if (pnood == pnode->next)
			{
				free(*h);
				break;
			}
			lng++;
			next = next->next;
			free((*h)->next);
			loop = 0;
		}
		free(*h)
	}
	*h = NULL;
	return (lng);
}
