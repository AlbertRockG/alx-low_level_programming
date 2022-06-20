#include "main.h"

/**
 * _strchr - It locates a character in a string.
 * @s: The string in which the character will be located.
 * @c: The character to be located.
 *
 * Return: A pointer to the first occurrence of @c in @s, or NULL, if not.
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	char *ptr;

	while (s[i++] != '\0')
	{
		if (s[i] != c)
		{
			continue;
		}
		else
		{
			ptr = &s[i];
			break;
		}
	}
	return (ptr);
}
