#include <stdio.h>

/**
 * main - start
 * Description: alphabet in lower and upper case
 * Return: 0 = success
*/
int main(void)
{
	char abc = 'a';
	char ABC = 'A';
	/* blank line :3 */
	while (abc <= 'z')
	{
		putchar(abc);
		++abc;
	}
	while (ABC <= 'Z')
	{
		putchar(ABC);
		++ABC;
	}
	putchar('\n');
	return (0);
}
