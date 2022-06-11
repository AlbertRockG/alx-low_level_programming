/*
 * File: 10-print_triangle.c
 * Author: AlbertG
 */

#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: the size of the triangle.
 *
 * Return: void.
 */
void print_triangle(int size)
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

			for (num2 = size - num1; num2 > 0; num2--)
			{
				_putchar(' ');
			}

			for (num2 = 0; num2 < num1; num2++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
