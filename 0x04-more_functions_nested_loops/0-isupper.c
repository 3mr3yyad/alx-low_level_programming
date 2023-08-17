#include "main.h"

/**
 * main - check the code
 *
 * Description: _isupper return 1
 * _isupper: desc
 * @c: check upeer case
 *
 * Return: Always 0.
*/

int _isupper(int c) /* Description: _isupper for upper case */
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
