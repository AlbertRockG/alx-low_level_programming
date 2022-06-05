/*
 * File: 101-print_comb4.c
 * Author: AlbertG
 */

#include <stdio.h>

/**
 * main - Prints all different combinatioins of three digits
 * must be separated by , followed by a space
 * must be different
 * 012, 120, 102, 021, 201, 210 considered same
 * only smallest combination
 * ascending order
 * putchar compulsary
 * only six times in the code
 * no char variable
 *
 * Return: Always 0
 */
int main(void)
{
	int i, j, z;

	for (i = 0; i < 10; i++)

		for (j = 1; j < 10; j++)

			for (z = 1; z < 10; z++)
			{
				if (i < j && j < z)
				{
					putchar((i % 10) + '0');
					putchar((j % 10) + '0');
					putchar((z % 10) + '0');

					if (i != 7 || j != 8 || z != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
	putchar('\n');
	return (0);
}
