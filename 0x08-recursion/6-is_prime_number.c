#include "main.h"

/**
 * is_prime_number - main
 * @n: input
 * @x: input1
 * Return: 0 , 1
**/

int pr(int n, int x);
int is_prime_number(int n)
{
	return (pr(n, 2));
}

/**
 * pr - main
 * @n: input
 * @x: input1
 * Return: 0 , 1
*/

int pr(int n, int x)
{
	if (x >= n && n > 1)
	{
		return (1);
	}
	else if (n % x == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (pr(n, x + 1));
	}
}
