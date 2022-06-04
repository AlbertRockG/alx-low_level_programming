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
 * and check if n is positive, equal to zero or negative
 * then prints it.
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
