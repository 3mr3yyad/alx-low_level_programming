#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * squareRoot - main
 * @x: input
 * Return: root of x
*/

double squareRoot(double x)
{
	float sqrt, tmp

	tmp = 0;
	sqrt = x / 2;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (x / tmp + tmp) / 2;
	}
	return (sqrt);
}

/**
 * greatest - main
 * @num: input2
*/

void greatest(long int num)
{
	int pr, gr;

	/* while loop */
	while (num % 2 == 0)
		num = num / 2;

	/* rule */
	for (pr = 3; pr <= squareRoot(num); pr += 2)
	{
		while (num % pr == 0)
		{
			num = num / pr;
			gr = pr;
		}
	}

	if (num > 2)
		gr = num;
	printf("%d\n", gr);
}

/**
 * main - start
 * Description: final step
 * Return: always 0
*/

int main(void)
{
	greatest(612852475143);

	return (0);
}
