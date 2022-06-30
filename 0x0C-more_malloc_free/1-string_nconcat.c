#include "main.h"
#include <stdlib.h>

unsigned int sizeof_dest_string(char *s1, char *s2, unsigned int n);

/**
 * sizeof_dest_string - It's returned the size of the destination
 *                      string.
 * @s1: The first string to concatenates.
 * @s2: The second string to be concatenated to @s1.
 * @n: The number of bytes of @s2 to concatenate to @s1.
 *
 * Return: The size of the destination string.
 */

unsigned int sizeof_dest_string(char *s1, char *s2, unsigned int n)
{
	unsigned int index, s1_size, s2_size;
	unsigned int dest_size = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	index = s1_size = s2_size = 0;
	while (s1[index++] != '\0')
		s1_size++;

	index = 0;
	while (s2[index++] != '\0')
		s2_size++;

	if (n >= s2_size++)
		n = s2_size;

	dest_size = s1_size + n + 1;

	return (dest_size);
}

/**
 * string_nconcat - It concatenates two strings.
 * @s1: The first string to concatenates.
 * @s2: The second string to be concatenated to @s1.
 * @n: The number of bytes of @s2 to concatenate to @s1.
 *
 * Return: A pointer to a character.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int index, dest_size, final_size = 0;
	char *deststring;

	dest_size = sizeof_dest_string(s1, s2, n);
	deststring = malloc(sizeof(char) * dest_size);

	if (deststring == NULL)
		return (NULL);

	index = 0;
	while (s1[index] != '\0')
	{
		deststring[final_size++] = s1[index];
		index++;
	}

	index = 0;
	while (s2[index] != '\0' || final_size < dest_size)
	{
		deststring[final_size++] = s2[index];
		index++;
	}

	deststring[dest_size] = '\0';

	return (deststring);
}
