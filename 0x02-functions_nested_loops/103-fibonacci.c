#include "main.h"

/**
 * main - start
 * Description: fibonacci
 * Return: 0 = success
*/

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, x;
	float t;

	while (1)
	{
		x = fib1 + fib2;

		if (x > 4000000)
			break;

		if ((x % 2) == 0)
			t += x;

		fib1 = fib2;
		fib2 = x;

	}
	printf("%.0f\n", t);

	return (0);
}
