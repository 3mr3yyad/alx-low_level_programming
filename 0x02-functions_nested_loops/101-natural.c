#include "main.h"

/**
 * main - start
 * Description: to 1024
 * Return: 0 = success
*/

int main(void)
{
	int x, y;

	for (y = 0 ; y < 1024; y++)
	{
		if ((y % 3 == 0) || (y % 5 == 0))
			x += y;
	}
	printf("%d\n", x);

	return (0);
}
