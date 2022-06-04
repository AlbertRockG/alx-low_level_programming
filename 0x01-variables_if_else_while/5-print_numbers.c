/*
 * File: 5-print_numbers.c
 * Author: AlbertG
 */
#include <stdio.h>
/**
 * main - Prints all single digit numbers of
 * base 10 starting from 0,
 * followed by a new line.
 *
 * Return: Always 0
 */
int main(void)
{
	int base10Digits;

	for (base10Digits = 0; base10Digits < 10; base10Digits++)
		printf("%d", base10Digits);
	putchar('\n');

	return (0);
}
