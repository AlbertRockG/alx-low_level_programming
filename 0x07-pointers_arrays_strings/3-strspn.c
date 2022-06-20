#include "main.h"
/**
 * _strspn - It gets the length of a prefix substring.
 * @s: The string in which to search the substring.
 * @accept: The substring to search for.
 *
 * Return: The number of bytes in the initial segment of
 *         s which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int k = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (k);
		}
	}
	return (k);
}
