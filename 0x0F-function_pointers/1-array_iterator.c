#include "function_pointers.h"

/**
 * array_iterator - main
 * @array: input
 * @size: input1
 * @action: input2
 * Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *x = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
