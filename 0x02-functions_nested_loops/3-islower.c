#include "main.h"

/**
 * _islower - lower case
 *
 * @c: print lower case a to z
 *
 * Return: 1 = lower case
 *	0 = success
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
