#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * strtow - It splits a string into words.
 * @str: The given string to be splited.
 *
 * Return: NULL, if str == NULL or str == "".
 *         NULL, if it failed to allocate the
 *         required amount of memory.
 *         A pointer to an array of strings (words),
 *         if the function succeeds. 
 */

char **strtow(char *str)
{
	char **arrofword;
	int index;
