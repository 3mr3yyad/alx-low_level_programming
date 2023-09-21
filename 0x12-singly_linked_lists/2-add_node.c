#include "lists.h"

/**
 * add_node - main
 * @head: head of nodes
 * @str: string
 * Return: void
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *HEAD = malloc(sizeof(list_t));

	if (!head || !HEAD)
		return (NULL);

	if (str)
	{
		HEAD->str= strdup(str);

		if (!HEAD->str)
		{
			free(HEAD);
			return (NULL);
		}
		HEAD->len = strlng(HEAD->str);
	}
	HEAD->next = *head;
	*head = HEAD;
	return (HEAD);
}
