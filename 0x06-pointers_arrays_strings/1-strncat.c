#include "main.h"

/**
 * _strncat - main
 * @dest: input1
 * @src: input2
 * @n: input3
 * Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;

	while (dest[x])
		x++;

	for (y = 0; y < n && src[y] != '\0'; y++)
		dest[x + y] = src[y];
	dest[x + y] = '\0';
	
	return (dest);
}
