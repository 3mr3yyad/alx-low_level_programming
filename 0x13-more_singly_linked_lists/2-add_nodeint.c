#include "lists.h"

/**
 * add_nodeint - main
 * head: head node
 * @n: input
 * Return: anode or NULL
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *anode = malloc(sizeof(listint_t));

	if (!head || !anode)
		return (NULL);

	anode->next = NULL;
	anode->n = n;

	if (*head)
		anode->next = *head;
	*head = anode;
	
	return (anode);
}
