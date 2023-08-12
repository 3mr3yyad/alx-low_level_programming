#include <stdio.h>
/**
 * main -start
 * Description: prin nums with char
 * Return: 0 = success
*/
int main(void)
{
	char x = '0'
		/*zero to nine */
	while (x < 10)
	{
		putchar(x + '0');
			x++;
	}
	putchar("\n");
	return (0);
}
