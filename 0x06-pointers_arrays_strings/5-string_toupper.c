#include "main.h"

/**
 * string_toupper - main
 * @uc: input
 * Return: uc
*/

char *string_toupper(char *uc)
{
	int x;

	for (x = 0; uc[x] != '\0'; x++)
	{
		if (uc[x] >= 97 && uc[x] <= 122)
		{
			uc[x] = uc[x] - 32;
		}
	}
	return (uc);
}
