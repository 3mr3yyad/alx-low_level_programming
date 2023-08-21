#include "main.h"

/**
 * _strcpy - main
 * @dest: input1
 * @src: input2
 * Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int x = -1;

	do {
		x++;
		dest[x] = src[x];

	} while (src[x] != '\0');
	return (dest);
}
