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
	int mylastDigit = n % 10;

	if (mylastDigit < 0)
		mylastDigit = mylastDigit * -1;

	_putchar(mylastDigit + '0');
	return (mylastDigit);
}
