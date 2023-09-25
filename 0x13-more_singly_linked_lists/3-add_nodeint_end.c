#include "lists.h"

/**
 * add_nodeint_end - main
 * @head: head node
 * @n: input
 * Return: anode or NULL
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *anode = malloc(sizeof(listint_t));
	listint_t *node;

	if (!head || !anode)
		return (NULL);

	anode->next = NULL;
	anode->n = n;

	if (!*head)
		*head = anode;

	else
	{
		node = *head;

		while (node->next)
			node = node->next;
		node->next = anode;
	}
	return (anode);
}
