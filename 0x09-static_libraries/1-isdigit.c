#include "main.h"

/**
 * _isdigit - main
 *
 * @c: description
 *
 * Return: always 0
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
