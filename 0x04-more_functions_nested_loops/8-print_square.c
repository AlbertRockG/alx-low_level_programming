/*
 * File: 8-print_square.c
 * Author: AlbertG
 */

#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: size of the square.
 *
 * Return: void.
 */
void print_square(int size)
{
	int num1, num2;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (num1 = 1; num1 < size + 1; num1++)
		{

			for (num2 = 1; num2 < size + 1; num2++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
