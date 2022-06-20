#include <stdio.h>

/**
 * _memset - It fills memory with a constant byte.
 * @s: The memory address to be filled.
 * @b: The character to fill with.
 * @n: The first n bytes of the memory area to fill.
 *
 * Return: A pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
