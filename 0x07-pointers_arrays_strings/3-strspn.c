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
	unsigned int i, j, len1 = 0, len2 = 0;
	unsigned int k = 0;

	while (s[len1] != '\0')
		len1++;
	while (accept[len2] != '\0')
		len2++;
	if (len1 == 0 || len2 == 0)
		return (0);

	for (i = 0; i < len2; i++)
	{
		for (j = 0; j < len1; j++)
		{
			if (accept[i] == s[j])
				break;
		}
		if (k < j)
			k = j;
	}
	return (k + 1);
}
