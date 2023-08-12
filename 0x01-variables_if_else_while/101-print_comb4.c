#include <stdio.h>
/**
 * main - start
 * Description: possible different combinations of two digits
 * Return: 0 = success
*/
int main(void)
{
	int x = 0, y, z;
	/* loop starting point  */
	while (x <= 9)
	{
		y = 0;
		while (y <= 9)
		{
			z = 0;
			while (z <= 9)
			{
				if (x != y && x < y && y != z && y < z)
				{
				putchar(x + 48);
				putchar(y + 48);
				putchar(z + 48);
					if (x != 9 || y != 8 || z != 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
				z++;
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
