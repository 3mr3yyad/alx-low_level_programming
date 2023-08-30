#include "main.h"

/**
 * _sqrt_recursion - main
 * @n: input
 * @x: input1
 * Return: _sqrt_recursion
*/

int sq(int n, int x);
int _sqrt_recursion(int n)
{
	return (sq(n, 1));
}

/**
 * sq - main2
 * @n: iput
 * @x: input1
 * Return: same
*/

int sq(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x * x < n)
	{
		return (sq(n, x + 1));
	}
	else
	{
	return (-1);
	}
}
