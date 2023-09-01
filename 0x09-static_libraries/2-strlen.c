#include "main.h"

/**
 * _strlen - main
 * @s: input
 * Return: length of string
*/

int _strlen(char *s)
{
	int rev;

	for (rev = 0; *s != '\0'; s++)
		++rev;

	return (rev);
}
