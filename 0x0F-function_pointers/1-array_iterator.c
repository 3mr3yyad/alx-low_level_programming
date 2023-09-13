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
	size_t x;

	for (x = 0; x < size; x++)
		action(array[x]);
}
