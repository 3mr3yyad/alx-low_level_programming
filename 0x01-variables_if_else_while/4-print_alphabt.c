#include <stdio.h>

/**
 * main - start
 * Description: alphabet in lower case except q and e
 * Return: 0 = success
*/
int main(void)
{
	char abc = 'a';

	while (abc <= 'z')
	{
		if (abc == 'q' || abc == 'e')
			abc++;
		putchar(abc);
		++abc;
	}
	putchar('\n');
	return (0);
}
