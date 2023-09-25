#include "lists.h"

/**
 * sum_listint - main
 * @head: head node
 * Return: s
*/

int sum_listint(listint_t *head)
{
	int s = 0;

	while (head)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
