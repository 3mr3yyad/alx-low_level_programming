#include "main.h"

/**
 * _realloc - main
 * @ptr: input
 * @old_size: input2
 * @new_size: input3
 * Return: 0
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int x;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}

	if (new_size > old_size)
	{
		p = malloc(new_size);

		if (p == NULL)
			return (NULL);

		for (x = 0; x < old_size && x < new_size; x++)
			*((char *)p + x) = *((char *)ptr + x);
		free(ptr);
	}
	return (p);
}
