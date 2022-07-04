#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initialize the structure dog.
 * @d: A pointer to the structure dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of dog.
 *
 * Return: Nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
