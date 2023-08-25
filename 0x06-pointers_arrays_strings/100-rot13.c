#include "main.h"

/**
 * rot13 - main
 * @c: input
 * Return: z
*/

char *rot13(char *c)
{
	int x;
	char ir[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char or[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *z = c;

	while (*c)
	{
		for (x = 0; x <= 52; x++)
		{
			if (*c == ir[x])
			{
				*c = or[x];
				break;
			}
		}
		c++;
	}
	return (z);
}
