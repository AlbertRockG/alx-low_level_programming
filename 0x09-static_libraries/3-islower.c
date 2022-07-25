/*
 * File: 3-islower.c
 * Author: AlbertG
 */

#include "main.h"

/**
 * _islower - check for lowercase character.
 * @c: character to check
 *
 * Return: 1 if c is lowercase or 0 otherwise.
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
