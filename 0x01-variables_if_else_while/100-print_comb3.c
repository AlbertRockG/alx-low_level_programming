/*
 * File: 100-print_comb3.c
 * Author: AlbertG
 */

#include <stdio.h>

/**
 * main - Prints all possible combinations of
 * two digits
 * separated by ,
 * must be different
 * 01 and 10 are considered the same
 * only smallest
 * ascending order with two digits
 * only use putchar
 * putchar five times max
 * no char variable
 *
 * Return: Always 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)

		for (j = 1; j < 10; j++)
		{
			if (i < j)
			{
				putchar((i % 10) + '0');
				putchar((j % 10) + '0');

				if (i != 8 || j != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	putchar('\n');
	return (0);
}
