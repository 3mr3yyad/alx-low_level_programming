#include "main.h"

/**
 * _isupper - check the code
 *
 * Description: _isupper return 1
 * @c: check upeer case
 *
 * Return: Always 0.
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
