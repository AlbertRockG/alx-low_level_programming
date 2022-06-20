#include "main.h"

/**
 * _strpbrk - It searches a string for any of a set of bytes.
 * @s: The string in which the bytes are searched.
 * @accept: The substring which bytes is searched.
 *
 * Return: A pointer to the byte found in s, if bytes found.
 *         NULL, if non such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
