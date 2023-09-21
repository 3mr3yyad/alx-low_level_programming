#include "lists.h"

/**
 * add_node_end - main
 * @head: head node
 * @str: string
 * Return: last node
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_n = malloc(sizeof(list_t));
	list_t *n = *head;

	if (!head || !end_n)
		return (NULL);

	if (str)
	{
		end_n->str = strdup(str);

		if (!end_n->str)
		{
			free(end_n);
			return (NULL);
		}
		end_n->len = strlen(end_n->str);
	}

	if (n)
	{
		while (n->next)
			n = n->next;
		n->next = end_n;
	}
	else
		*head = end_n;

	return (end_n);

}
