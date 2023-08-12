#include <stdio.h>

/**
 * main - start
 * Description: hexa nums
 * Return: 0 = success
*/

int main(void)
{
	int x = 48;
	/* hex */
	while (x < 103)
	{
		putchar(x);
		if (x == 57)
			x += 39;
		x++;
	}
	putchar('\n');
	return (0);
}
