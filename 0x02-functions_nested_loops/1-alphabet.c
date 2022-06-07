/*
 * File: 1-alphabet.c
 * Author: AlbertG
 */

#include "main.h"

/**
 * print_alphabet - Prints the alphabet
 * in lowercase and followed
 * by a new line
 *
 * Return: void
 */
void print_alphabet(void)
{
	char myletter;

	for (myletter = 'a'; myletter <= 'z'; myletter++)
	{
		_putchar(myletter);
	}

	_putchar('\n');

}
