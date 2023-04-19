#include "dog.h"

/**
 * free_dog - a function that frees a dog
 * @d : the dog to free
*/

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->age);
		free(d->name);
		free(d->owner);
		free(d);
	}
}
