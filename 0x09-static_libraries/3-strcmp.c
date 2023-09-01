#include "main.h"

/**
 * _strcmp - main
 * @s1: input1
 * @s2: input2
 * Return: x
*/

int _strcmp(char *s1, char *s2)
{
	int x = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			x = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (x);
}
