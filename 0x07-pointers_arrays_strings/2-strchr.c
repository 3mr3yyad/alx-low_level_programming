#include "main.h"

/**
 * _strchr - main
 * @s: input
 * @c: input1
 * Return: null
*/

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
		{
			return (s + x);
		}
	}
	return ('\0');
}
