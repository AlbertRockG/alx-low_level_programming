#include <stdio.h>
/*
 * File: 4-print_alphabt.c
 * Author: AlbertG
 */

/**
 * main - Prints the alphabet in lowercase,
 * followed by a new line with the putchar
 * function except q and e
 *
 * Return: Always 0
 */
int main(void)
{
	char mychar;

	for (mychar = 'a'; mychar <= 'z'; ++mychar)
	{
		if ((mychar != 'q') && (mychar != 'e'))
			putchar(mychar);
	}
	putchar('\n');

	return (0);
}
