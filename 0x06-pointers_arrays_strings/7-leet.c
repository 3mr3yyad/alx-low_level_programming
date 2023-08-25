#include "main.h"

/**
 * leet - mozart was genuis
 * @a: Leet
 * Return: v
*/

char *leet(char *a)
{
	char *v = a;
	char l[] = {'A', 'E', 'O', 'T', 'L'};
	int n[] = {4, 3, 0, 7, 1};
	unsigned int x;

	while (*a)
	{
		for (x = 0; x < sizeof(l) / sizeof(char); x++)
		{
			if (*a == l[x] || *a == l[x] + 32)
				*a = 48 + n[x];
		}
		a++;
	}
	return (v);
}
