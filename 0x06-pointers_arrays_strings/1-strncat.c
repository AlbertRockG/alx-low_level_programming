#include "main.h"

/**
 * _strncat - Copies at most an inputted number of bytes for src to dest.
 * @dest: The destination string.
 * @src: The source string to be concatenated to @dest.
 * @n: The maximum number of bytes to be copied.
 *
 * Return: a pointer to dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;
	char *cpdest = dest;

	while (cpdest[dest_len] != '\0')
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
	{
		dest[dest_len++] = src[index];
	}

	return (dest);
}
