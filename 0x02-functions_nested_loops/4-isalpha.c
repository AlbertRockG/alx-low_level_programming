/*
 * File: 4-isalpha.c
 * Author: AlbertG
 */

#include "main.h"

/**
 * _isalpha - check for alphabetic character.
 * @c: the character to check.
 *
 * Return: 1 if c is a lowercase or uppercase letter, 0 otherwise.
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
