#include "main.h"

/**
 * rev_string - main
 * @s: input
 * Return: NULL
*/

void rev_string(char *s)
{
	int x, y;
	char cz;

	for (x = 0; s[x] != '\0'; ++x)
		;

	for (y = 0; y < x / 2; y++)
	{
		cz = s[y];
		s[y] = s[x - 1 - y];
		s[x - 1 - y] = cz;
	}
}
