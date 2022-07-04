#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - It computes the length of a given string.
 * @member: The string type member of the structure.
 *
 * Return: The length of the string.
 */
int _strlen(char *member)
{
	int length = 0;

	while (*member++)
		length++;

	return (length);
}

/**
 * _strcpy - It copies a given string into another one.
 * @dest: The destination string.
 * @src: The string to be copied.
 *
 * Return: A pointer to the destination string.
 */

char *_strcpy(char *dest, char *src)
{
	int index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - create a new instance of dog_t.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: dog_t instance.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bulldog;

	if ((name == NULL) || (age < 0) || (owner == NULL))
		return (NULL);

	bulldog = malloc(sizeof(dog_t));
	if (bulldog == NULL)
		return (NULL);

	bulldog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (bulldog->name == NULL)
	{
		free(bulldog);
		return (NULL);
	}

	bulldog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (bulldog->owner == NULL)
	{
		free(bulldog->name);
		free(bulldog);

		return (NULL);
	}

	bulldog->name = _strcpy(bulldog->name, name);
	bulldog->age = age;
	bulldog->owner = _strcpy(bulldog->owner, owner);

	return (bulldog);
}
