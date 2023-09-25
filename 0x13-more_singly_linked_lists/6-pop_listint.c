#include "lists.h"

/**
 * pop_listint - main
 * @head: head node
 * Return: x
*/

int pop_listint(listint_t **head)
{
	listint_t *node;
	int x;

	if (!head || !*head)
		return (0);

	node = (*head)->next;
	x = (*head)->x;
	free(*head);
	*head = node;

	return (x);
}
