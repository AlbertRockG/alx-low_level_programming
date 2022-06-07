/*
 * File: loop_quiz.c
 * Author: AlbertG
 */

#include <stdio.h>

/**
 * main - Tests betty compliant style for
 * loops as :
 * for loop ;
 * while loop
 * and do while loop.
 *
 * Return: Always 0
 */
int main(void)
{
	int a;

	a = 0;
	while (a < 10)
		printf("%d\n", a++);
	return (0);
}

