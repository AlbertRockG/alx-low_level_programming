#include "main.h"
#include "stdlib.h"
/**
 * create_array - It creates an array of chars,
 *                and initializes it with a specific
 *                char.
 * @size: The size of the array.
 * @c: The character to initialize with.
 *
 * Return: A pointer to array of characters.
 */
char *create_array(unsigned int size, char c)
{
	char *myarray = (char *)malloc(size * sizeof(char));
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	if (myarray == NULL)
		return (NULL);

	while (i < size)
	{
		myarray[i] = c;
		i++;
	}
	myarray[size] = '\0';

	return (myarray);
}
