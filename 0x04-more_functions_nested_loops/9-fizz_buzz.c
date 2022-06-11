/*
 * File: 9-fizz_buzz.c
 * Author: AlbertG
 */

#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line.
 * for % 3 == 0 print Fizz.
 * for % 5 == 0 print Buzz.
 * for % 3 == 0 AND % 5 == 0 print FizzBuzz.
 * Number or word should be separated by a space.
 *
 * Return: 0
 */
int main(void)
{
	int number;

	for (number = 1; number < 101; number++)
	{
		if (number % 3 == 0 && number % 5 == 0)
			printf("Fizz Buzz");

		else if (number % 3 == 0)
			printf("Fizz");

		else if (number % 5 == 0)
			printf("Buzz");

		else
			printf("%d", number);

		printf(" ");
	}

	printf("\n");
	return (0);
}
