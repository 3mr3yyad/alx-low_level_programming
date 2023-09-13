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
	int x;

	if (array && action)
		for (x = 0; x < (int)size; x++)
			action(array[x]);
}
