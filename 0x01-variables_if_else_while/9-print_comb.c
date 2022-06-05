/*
 * File: 6-print_numberz.c
 * Author: AlbertG
 */
#include <stdio.h>
/**
 * main - Prints all single numbers of base
 * 10 starting from 0,
 * followed by a new line by
 * using only putchar function
 * without using any variable of type
 * char
 *
 * Return: Always 0
 */
int main(void)
{
	int myDigits;

	for (myDigits = 0; myDigits <= 9; ++myDigits)
	{
		putchar((myDigits % 10) + '0');

		if (myDigits <= 8)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
