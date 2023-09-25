#include "lists.h"

/**
 * free_listint - main
 * @head: head node
 * Return: void
*/

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
