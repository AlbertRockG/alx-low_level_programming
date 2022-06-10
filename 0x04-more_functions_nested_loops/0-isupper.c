/*
 * File: 0-isupper.c
 * Author: AlbertG
 */

#include "main.h"

/**
 * _isupper - check for lowercase character.
 * @c: character to check
 *
 * Return: 1 if c is uppercase or 0 otherwise.
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
