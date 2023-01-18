#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initialize a variable of type dog struct
 *
 * @d: pointer to the struct dog
 * @name: name of the dog
 * @age: age of dog
 *
 * @owner: name of dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
