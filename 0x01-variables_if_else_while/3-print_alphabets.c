#include <stdio.h>
/*
 * File: 2-print_alphabet.c
 * Author: AlbertG
 */

/**
 * main - Prints the alphabet in lowercase,
 * followed by a new line with the putchar
 * function
 *
 * Return: Always 0
 */
int main(void)
{
	char mychar;

	for (mychar = 'a'; mychar <= 'z'; ++mychar)
	{
		putchar(mychar);
	}

	for (mychar = 'A'; mychar <= 'Z'; ++mychar)
	{
		putchar(mychar);
	}
	putchar('\n');

	return (0);
}
