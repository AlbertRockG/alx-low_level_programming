/*
 * File: 7-print_last_digit.c
 * Author: AlbertG
 */

#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: the number to check.
 *
 * Return: the value of the last digit.
 */
int print_last_digit(int n)
{
	if (n >= 0)
	{
		_putchar((n % 10) + '0');
		return (n % 10);
	}
	else
	{
		_putchar((-n % 10) + '0');
		return (-n % 10);
	}
}
