#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - main
 * @name: input
 * @age: input1
 * @owner: input2
 * Return: p
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	int nln, oln, x;
	dog_t *doggy;

	nln = oln = 0;
	while (name[nln++])
		;
	while (owner[oln++])
		;

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	doggy->name = malloc(nln * sizeof(char));
	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}

	for (x = 0; x < nln; x++)
		doggy->name[x] = name[x];

	doggy->age = age;

	doggy->owner = malloc(oln * sizeof(char));
	if (doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}

	for (x = 0; x < oln; x++)
		doggy->owner[x] = owner[x];

	return (doggy);
}
