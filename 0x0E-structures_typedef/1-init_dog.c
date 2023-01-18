#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a vzriable of type struct dog
 * @d: the dog going to be initialized
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
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
