#include "main.h"

/**
 * _strcat - main
 * @dest: input1
 * @src: input2
 * Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int x, y;

	x = 0;

	while (dest[x])
		x++;

	for (y = 0; src[y] ; y++)
		dest[x++] = src[y];

	return (dest);
}
