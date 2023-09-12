#ifndef dog_h
#define dog_h

/**
 * struct dog - main
 * @name: input
 * @age: input1
 * @owner: input2
 * Description: Define a new type
*/

struct dog
{
	char *name;
	float age;
	char *owner;
}
;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
