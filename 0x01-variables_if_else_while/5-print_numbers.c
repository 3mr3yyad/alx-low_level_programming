#include <stdio.h>
/**
 * main - start
 * Description: all single digit numbers of base 10 starting from 0
 * Return: 0 = success
*/
int main(void)
{
	int x = 0;
	/* zero to nine */
	while (x <= 9)
	{
		printf("%d", x);
		x++;
	}
	printf("\n");
	return (0);
}
