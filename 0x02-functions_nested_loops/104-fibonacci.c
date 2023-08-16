#include "main.h"

/**
 * advanced - start
 * @x: input
 * Return: y = success
*/

int advanced(int x)
{
	int y = 0;

	if (!x)
		return (1);

	while (x)
	{
		x = x / 10;
		y += 1;
	}

	return (y);
}
