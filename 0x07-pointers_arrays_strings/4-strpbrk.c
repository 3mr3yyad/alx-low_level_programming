#include "main.h"

/**
 * _strpbrk - main
 * @s: input
 * @accept: input2
 * Return: always 0
*/

char *_strpbrk(char *s, char *accept)
{
	int x = 0;
	int y;
	char *p;

	while (s[x] != '\0')
	{
		y = 0;
		while (accept[y] != '\0')
		{
			if (accept[y] == s[x])
			{
				p = &s[x];
				return (p);
			}
			y++;
		}
		x++;
	}
	return (0);
}
