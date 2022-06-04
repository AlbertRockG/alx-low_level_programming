#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * File: 0-positive_or_negative.c
 * Author: AlbertG
 */

/**
 * main - This program will assign a random number
 * to the variable each time it is executed
 * and check if its last digit is greater than 5,
 * less than 6 and not equal to zero,
 * or equal to zero
 * then prints it.
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
	else if (((n % 10) < 6) && ((n % 10) != 0))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	}
	return (0);
}
