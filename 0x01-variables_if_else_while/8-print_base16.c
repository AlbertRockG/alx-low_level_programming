#include <stdio.h>
/*
 * File: 8-print_base16.c
 * Author: AlbertG
 */

/**
 * main - Prints all the numbers of base 16 in lowercase,
 * followed by a new line with the putchar
 * function
 *
 * Return: Always 0
 */
int main(void)
{
	char mychar;
	int mydigit;

	for (mydigit = 0; mydigit < 10; ++mydigit)
		putchar((mydigit % 10) + '0');

	for (mychar = 'a'; mychar <= 'f'; ++mychar)
		putchar(mychar);

	putchar('\n');

	return (0);
}
