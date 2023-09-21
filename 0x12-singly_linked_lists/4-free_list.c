#include "lists.h"

/**
 * free_list - main
 * @head: node head
*/

void free_list(list_t *head)
{
	list_t *n, nxt_n;

	if (!head)
		return;

	n = head;

	while (n)
	{
		nxt_n = n->next;

		free(n->str);
		free(n);

		n = nxt_n;
	}
}
