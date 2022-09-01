#include "main.h"

/**
 * _memcpy - It copies n bytes from *src to *dest.
 * @dest: The pointer to the destination.
 * @src: The pointer to the source.
 * @n: The n first bytes to copy.
 *
 * Return: A pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
