#include "dog.h"

/**
 * *new_dog - creates a new dog
 * @name: the name
 * @age: the age
 * @owner: the owner
 *
 * Return: a pointer to the dog_t created or NULL if fail
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *t;
	char *namecp = name;
	char *ownercp = owner;

	t = malloc(sizeof(dog_t));
	t->name = namecp;
	t->age = age;
	t->owner = ownercp;

	return (t);
}
