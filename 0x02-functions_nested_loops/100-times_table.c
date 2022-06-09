#include "main.h"

/*
 * File: 100-times_table.c
 * Author: AlbertG
 */

/**
 * print_times_table - prints the n times table,
 *                     starting with 0.
 * @n: number of times.
 *
 * Return: void.
 */
void print_times_table(int n)
{
	int i, j, z, t;

	i = 0;
	t = n + 1;

	while (i < t)
	{
		if (n < 0 || n > 15)
			break;

		_putchar('0');
		j = 1;

		while (j < t)
		{
			_putchar(',');
			_putchar(' ');

			z = j * i;

			if (z <= 99)
				_putchar(' ');
			if (z <= 9)
				_putchar(' ');
			if (z >= 100)
			{
				_putchar((z / 100) + '0');
				_putchar(((z / 10)) % 10 + '0');
			}
			else if (z <= 99 && z >= 10)
			{
				_putchar((z / 10) + '0');
			}
			_putchar((z % 10) + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
