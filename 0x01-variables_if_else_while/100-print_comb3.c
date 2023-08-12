#include <stdio.h>
/**
 * main - start
 * Description: possible different combinations of two digits
 * Return: 0 = success
*/
int main(void)
{
	int x = 0, y;
	/* loop starting point  */
	while (x <= 9)
	{
		y = 0;
		while (y <= 9)
		{
			if (x != y && x < y)
			{
			putchar(x + 48);
			putchar(y + 48);

				if (x != 8 ||  y != 9)
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
