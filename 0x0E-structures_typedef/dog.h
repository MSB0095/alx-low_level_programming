#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure that contains name age owner
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: dog's owner
 *
 * Description: a simple struct
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
