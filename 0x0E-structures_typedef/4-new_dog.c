#include "dog.h"
#include <stdlib.h>

/**
 * strln - main
 * str: input
 * Return: l
*/

int strln(const char *str)
{
	int l = 0;

	while (*str++)
		l++;
	return (l);
}
/**
 * strcp - main
 * @src: input
 * @dst: input1
 * Return: dst
*/

char *strcp(char *src, char *dst)
{
	int x;

	for (x = 0; src[x]; x++)
		dst[x] = src[x];
	dst[x] = '\0';
	return (dst);
}

/**
 * new_dog - main
 * @name: input
 * @age: input1
 * @owner: input2
 * Return: dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);


	dog->name = malloc(sizeof(char) * (strln(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (strln(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = stcp(dog->name, name;
	dog->age = age;
	dog->owner = strcp(dog->owner, owner);
	return (dog);
}
