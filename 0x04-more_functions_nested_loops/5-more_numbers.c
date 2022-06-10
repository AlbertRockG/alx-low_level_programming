/*
 * File: 5-more_numbers.c
 * Author: AlbertG
 */

#include "main.h"

/**
 * more_numbers - prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 *
 * Return: void.
 */
void more_numbers(void)
{
	int times, number;

	times = 1;

	while (times < 11)
	{
		number = 0;

		while (number < 15)
		{
			if (number > 9)
			{
				_putchar((number / 10) + '0');
			}
			_putchar((number % 10) + '0');
			number++;
		}
		_putchar('\n');
		times++;
	}
}
