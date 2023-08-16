#include "main.h"

/**
 * numLength - return length of strings
 * @x: operand nums
 * Return: y = success
*/

int numLength(int x)
{
	int y = 0;

	if (!x)
		return (1);

	while (x)
	{
		x = x / 10;
		y += 1;
	}

	return (y);
}

/**
 * main - start
 *
 * Description: prints nums
 *
 * Return: 0 = success
*/

int main(void)
{
	int a, b;
	unsigned long f1 = 1, f2 = 2, sum, mx = 100000000, f1o = 0, f2o = 0, sumo = 0;

	for (a = 1; a <= 98; a++)
	{
		if (f1o > 0)
			printf("%lu", f1o);
		b = numLength(mx) - 1 - numLength(f1);

		while (f1o > 0 && b > 0)
		{
			printf("%d", 0);
			b--;
		}

		printf("%lu", f1);

		sum = (f1 + f2) % mx;
		sumo = f1o + f2o + (f1 + f2) / mx;
		f1 = f2;
		f1o = f2o;
		f2 = sum;
		f2o = sumo;

		if (a != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
