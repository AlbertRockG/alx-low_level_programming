#include <stdio.h>
/*
 * File: 7-print_tebahpla.c
 * Author: AlbertG
 */

/**
 * main - Prints the alphabet in lowercase,
 * followed by a new line with the putchar
 * function in reverse order
 *
 * Return: Always 0
 */
int main(void)
{
	char mychar;

	for (mychar = 'z'; mychar >= 'a'; --mychar)
	{
		putchar(mychar);
	}
	putchar('\n');

	return (0);
}
