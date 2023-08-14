#include <stdio.h>
/**
 * main - start
 * Description: all possible combinations of two two-digit numbers
 * Return: 0 = success
*/
int main(void)
{
	int x = 0, y;
	while (x <= 99)
	{
		x = y;
		while (y <= 99)
		{
			if (x != z)
			{
			putchar((x / 10) + 48);
			putchar((x % 10) + 48);
			putchar(' ');
			putchar((y / 10) + 48);
			putchar((y % 10) + 48);
				if (x != 98 || y != 99)
				{
				putchar(',');
				putchar(' ');
				}
			}
		y++;
		}
	x++;
	}
	putchar('\n');
	return (0);
}
