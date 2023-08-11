#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - start
 * Description: random nums
 * Return: 0 = success
*/

int main(void)
{
	int n, x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	if (x > 5)
		printf("Last digit of %i is%i and is greater than 5\n", n, x);
	else if (x == 0)
		printf("Last digit of %i is %i and is 0\n", n, x);
	else if (x < 6 && n > 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, x);
	return (0);
}
