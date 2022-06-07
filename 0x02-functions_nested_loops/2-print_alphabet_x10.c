/*
 * File: 2-print_alphabet_x10.c
 * Author: AlbertG
 */

#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet
 * in lowercase and followed
 * by a new line 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char myletter;

		for (myletter = 'a'; myletter <= 'z'; myletter++)
		{
			_putchar(myletter);
		}

		_putchar('\n');
		i++;
	}
}
