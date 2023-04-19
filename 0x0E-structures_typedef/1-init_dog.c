#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function to be callled
 *
 * @d: this is the pointer to struct dog that'll be initialized
 *
 * @name:the name to be initialized
 * @age: the age to be initialized
 * @owner: the owner to be initialized
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

