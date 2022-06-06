/*
 * File: 102-print_comb5.c
 * Author: AlbertG
 */

#include <stdio.h>

/**
 * main - Prints all possible combinations
 * of two two digit numbers
 * The numbers should range from 0 to 99
 * the two numbers should be separated by a space
 * should be printed with two digits : 1 -> 01
 * should be printed in ascending order
 * 00 01 and 01 00 are considered the same
 * only use puchar()
 * 8 times max
 * no char variable
 *
 * Return: Always 0
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 <= 98; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 <= 99; digit2++)
		{
			putchar((digit1 / 10) + '0');
			putchar((digit1 % 10) + '0');
			putchar(' ');
			putchar((digit2 / 10) + '0');
			putchar((digit2 % 10) + '0');

			if (digit1 == 98 && digit2 == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
