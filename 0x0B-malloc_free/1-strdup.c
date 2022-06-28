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
 * _strdup - It duplicates a given string.
 * @str: Tne given string to duplicate with the malloc function.
 *
 * Return: NULL, if str = NULL or insufficient memory was available.
 *         A pointer to a newly allocated space in memory.
 */
char *_strdup(char *str)
{
	int i;
	char *copyofstr;
	int length;

	if (str == NULL)
		return (NULL);

	length = _strlen(str) + 1;
	copyofstr = malloc(length * sizeof(char));

	if ((str == NULL) || (copyofstr == NULL))
		return (NULL);

	for (i = 0; str[i]; i++)
		copyofstr[i] = str[i];

	copyofstr[i] = '\0';

	return (copyofstr);
}
