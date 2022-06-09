/*
 * File: 103-fibonacci.c
 * Auth: Brennan D Baraban
 */

#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 * terms not exceeding 4000000.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, nextfib;
	float sum;

	while (1)
	{
		fibsum = fib1 + fib2;
		if (nextfib > 4000000)
			break;

		if ((nextfib % 2) == 0)
			sum += nextfib;

		fib1 = fib2;
		fib2 = nextfib;
	}
	printf("%.0f\n", _sum);

	return (0);
}
