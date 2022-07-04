#ifndef DOG_H
#define DOG_H

/**
 * struct dog - define a dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Description: define the characteristics
 *              of a dog, its name, age and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *member);
char *_strcpy(char *dest, char *src);

#endif /* #define DOG_H */
