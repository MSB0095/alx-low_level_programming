#include "dog.h"

/**
 * init_dog - a function that initiates a variable
 * @d: the structure
 * @name: the name
 * @age: the age
 * @owner: owner
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
