#include <stdio.h>

/**
 * main - start
 * Description: alphabet in lower case
 * Return: 0 = success
*/
int main(void)
{
	char abc = 'a';

	while (abc <= 'z')
	{
		putchar(abc);
		++abc;
	}
	putchar('\n');
	return (0);
}
