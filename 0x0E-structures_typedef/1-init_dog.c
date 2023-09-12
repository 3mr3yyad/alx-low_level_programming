#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - main
 * @d: input
 * @name: input1
 * @age: input2
 * @owner: input3
 * Description:initialize a variable of type struct dog
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
