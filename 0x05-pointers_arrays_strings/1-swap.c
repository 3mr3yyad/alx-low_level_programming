#include "main.h"

/**
 * swap_int - main
 * @a: adr1
 * @b: adr2
 * Return: always 0
*/

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
