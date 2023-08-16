#include "main.h"


/**
 * main - start
 * Description: fibonacci
 * Return: 0 = success
*/

int main(void)
{
	int x;
	unsigned long fib1 = 0, fib2 = 1, y;

	for (x = 0; x < 50; x++)
	{
		y = fib1 + fib2;
		printf("%lu", y);

		fib1 = fib2;
		fib2 = y;

		if (x == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
