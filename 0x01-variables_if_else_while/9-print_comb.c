#include <stdio.h>
/**
 * main - start
 * Description: all possible combinations of single-digit numbers
 * Return: 0 = success
*/
int main(void)
{
	int x = 0;
	/* nums */
	while (x < 10)
	{
		putchar(x + 48);
		if (x != 9)
		{
			putchar(',');
			putchar(' ');
		}
	x++;
	}
	putchar('\n');
	return (0);
}
