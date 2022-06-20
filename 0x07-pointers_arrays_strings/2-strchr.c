#include "main.h"
#include <stddef.h>
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
		else if (s[i] == c)
		{
			ptr = &s[i];
			break;
		}
		else
		{
			ptr = '\0';
			break;
		}
	}
	return (ptr);
}
