#include "main.h"

/**
 * _pow_recursion - main
 * @x: input
 * @y: input2
 * Return: _pow_recursion
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
