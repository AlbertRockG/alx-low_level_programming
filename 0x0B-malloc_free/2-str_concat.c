#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int _strlen(char str[]);

/**
 * _strlen - It measures the length of given string.
 * @str: The given string.
 *
 * Return: The length of string as an integer.
 */

int _strlen(char str[])
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * str_concat - It concatenates two strings.
 * @s1: The first given string.
 * @s2: The second given string to concatenates with.
 *
 * Return: A pointer of the concatenated strings, if ok.
 *         NULL, on failure.
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, length1, length2;
	char *strconcat;

	if (s1 == NULL)
		length1 = 0;
	else if (s2 == NULL)
		length2 = 0;
	else if (s1 != NULL)
		length1 = _strlen(s1);
	else
		length2 = _strlen(s2);

	strconcat = malloc((length1 + length2 + 1) * sizeof(char));

	if (strconcat == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
	{
		strconcat[i] = s1[i];
	}

	for (j = 0; s2[j]; j++)
	{
		strconcat[i++] = s2[j];
	}
	strconcat[i++] = '\0';

	return (strconcat);
}
