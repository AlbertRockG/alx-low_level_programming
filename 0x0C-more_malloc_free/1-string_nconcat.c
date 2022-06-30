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
	unsigned int index = 0, s1_size = 0;
	unsigned int dest_size = 0, s2_size = 0;

	if ((s1 == NULL) || (s2 == NULL))
	{
		s1 = "";
		s2 = "";
	}

	for (index = 0; s2[index]; index++)
		s2_size++;

	if (n >= s2_size)
	{
		for (index = 0; s1[index] || s2[index]; index++)
			dest_size++;
	}
	else
	{
		for (index = 0; s1[index]; index++)
			s1_size++;

		dest_size = s1_size + n;
	}

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

	for (index = 0; s1[index]; index++)
		deststring[final_size++] = s1[index];

	for (index = 0; s2[index] && final_size <= dest_size; index++)
		deststring[final_size++] = s2[index];

	deststring[final_size++] = '\0';
	return (deststring);
}
