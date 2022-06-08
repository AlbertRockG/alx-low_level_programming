/*
 * File: 9-times_table.c
 * Author: AlbertG
 */

#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: void.
 */
void times_table(void)
{
	int i, j, z;

	i = 0;

	while (i < 10)
	{
		_putchar('0');
		j = 1;

		while (j < 10)
		{
			_putchar(',');
			_putchar(' ');

			z = j * i;

			if (z <= 9)
				_putchar(' ');
			else
				_putchar((z / 10) + '0');

			_putchar((z % 10) + '0');
			j++;
		}

		_putchar('\n');
		i++;
	}
}
