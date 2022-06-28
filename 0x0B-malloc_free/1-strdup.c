#include "main.h"
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
	int length = _strlen(str) + 1;
	char *strc;

	if (str == NULL)
		return (NULL);

	if (malloc(length * sizeof(char)) == NULL)
		return (NULL);

	strc = (char *)malloc(length * sizeof(char));

	for (i = 0; i <= length; i++)
		strc[i] = str[i];

	return ((char *)strc);
}
