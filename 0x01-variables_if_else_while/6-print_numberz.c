#include <stdio.h>
/**
 * main -start
 * Description: prin nums with char
 * Return: 0 = success
*/
int main(void)
{
	int x = 0;
	while (x < 10)
		/*zero to nine */
	{
		putchar(x + '0');
			x++;
	}
	putchar('\n');
	return (0);
}
