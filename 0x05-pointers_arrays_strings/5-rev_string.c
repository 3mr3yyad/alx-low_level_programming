#include "main.h"

/**
 * rev_string - main
 * @s: input
 * Return: NULL
*/

void rev_string(char *s)
{
	int x, y;
	char z;

	for (x = 0; s[x] != '\0'; ++x)
		;

	for (x = 0; x < y / 2; x++)
	{
		z = s[x];
		s[x] = s[y - 1 - x];
		s[y - 1 - x] = z;
	}
}
