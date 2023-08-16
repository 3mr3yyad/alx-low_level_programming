#include "main.h"

/**
 * _isalpha - lower and upper
 *
 * @c: prints lower and upper case
 *
 * Return: 1 = c
 *	0 = success
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
