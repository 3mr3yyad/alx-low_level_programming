#include "lists.h"

/**
 * delete_nodeint_at_index - main
 * @head: head node
 * @index: input
 * Return: 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *prenode;
	unsigned int x = 0;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}

	node = *head;

	while (node)
	{
		if (x == index)
		{
			prenode->next = node->next;
			free(node);

			return (1);
		}
		x++;
		prenode = node;
		node = node->next;
	}
	return (-1);
}
