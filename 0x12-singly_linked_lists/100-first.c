#include "lists.h"

/**
 * _constructor - main
 * Description: func printed before main
 * Return: void
*/

void _constructor(void) __attribute__ ((constructor));

void _constructor(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
