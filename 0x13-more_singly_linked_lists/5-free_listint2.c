#include "lists.h"

/**
 * free_listint - main
 * @head: head node
 * Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *node, *a;

	if (!head)
		return;

	node = *head;

	while (node)
	{
		a = node;
		node = node->next;
		free(a);
	}
	*head = NULL;
}
