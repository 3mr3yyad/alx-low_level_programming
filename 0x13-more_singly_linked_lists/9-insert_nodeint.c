#include "lists.h"

/**
 * insert_nodeint_at_index - main
 * @head: head node
 * @idx: input
 * @n: input1
 * Return: anode or NULL
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *anode = malloc(sizeof(listint_t));
	unsigned int x = 0;

	if (!head || !anode)
		return (NULL);

	anode->n = n;
	anode->next = NULL;

	if (!idx)
	{
		anode->next = *head;
		*head = anode;

		return (anode);
	}

	node = *head;

	while (node)
	{
		if (x == idx - 1)
		{
			anode->next = node->next;
			node->next = anode;

			return (anode);
		}
		x++;
		node = node->next;
	}
	free(anode);

	return (NULL);
}
