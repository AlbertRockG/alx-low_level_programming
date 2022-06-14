#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: first integer.
 * @b: second integer.
 *
 * Return: nothing (void).
 */
void swap_int(int *a, int *b)
{
	int media;

	media = *a;
	*a = *b;
	*b = media;
}
