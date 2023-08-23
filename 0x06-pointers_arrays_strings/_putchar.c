#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - write the character c
 * @c: print character
 * Return: 1 = success
 * 	-1 no error
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
