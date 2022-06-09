/*
 * File: 102-fibonacci.c
 * Author: AlbertG
 */

#include <stdio.h>

/**
 * main - prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int mycount;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (mycount = 0; mycount < 50; mycount++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (mycount == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
