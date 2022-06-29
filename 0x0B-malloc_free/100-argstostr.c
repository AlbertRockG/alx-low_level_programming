#include "main.h"
#include <stdlib.h>

/**
 * argstostr - It concatenates all the argments of the program
 *             and separes them with a \n character.
 * @ac: The number of arguments provided.
 * @av: The array of arguments provided.
 *
 * Return: A pointer to a new string, if ok.
 *         NULL, if ac == 0 or av == NULL.
 *         NULL, if it fails to allocate the memory.
 */
char *argstostr(int ac, char **av)
{
	int i, j, index;
	size_t len;
	char *final;

	if ((ac == 0) || (av == NULL))
		return (NULL);

	len = 1;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}

	final = malloc(sizeof(char) * (len + ac));

	if (final == NULL)
		return (NULL);

	index = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			final[index++] = av[i][j];

		final[index++] = '\n';
	}

	final[len] = '\0';

	return (final);
}
