#include "lists.h"

#include <stdio.h>
#include <stdlib.h>

/**
 * r_ - main
 * @list: input
 * @size: input1
 * @new: new node
 * Return: newlist
*/

const listint_t **r_(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **newlist;
	size_t x;

	newlist = malloc(size * sizeof(listint_t *));

	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (x = 0; x < size - 1; x++)
		newlist[x] = list[x];

	newlist[x] = new;
	free(list);

	return (newlist);
}

/**
 * print_listint_safe - main
 * @head: head node
 * Return: i
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t x, i = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (x = 0; x < i; x++)
		{
			if (head == list[x])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);

				return (i);
			}
		}
		i++;
		list = r_(list, i, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (i);
}
