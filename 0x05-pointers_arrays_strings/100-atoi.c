#include "main.h"

/**
 * _atoi - main
 * @s: input
 * Return: int
*/

int _atoi(char *s)
{
	unsigned int = ux;
	int x = 0;

	do {
		if (*s == '-')
			x *= -1;
		else if (*s >= '0' && *s < '10')
			ux = (ux * 10) + (*s - '0');
		else if (ux > 0)
			break;
	} while (*s++);

	return (ux * x);
}
