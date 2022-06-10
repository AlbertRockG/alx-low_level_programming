/*
 * File: 7-print_diagonal.c
 * Author: AlbertG
 */

#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: the number of times the character \ should be printed.
 *
 * Return: void.
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int step;

		for (step = 1; step <= n; step++)
		{
			int times;

			for (times = 1; times <= step; times++)
			{
				_putchar(' ');
			}
			_putchar('\\');

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
