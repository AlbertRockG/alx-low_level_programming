#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - A function that sums all the provided arguments.
 * @n: The provided arguments type.
 *
 * Return: The sum of the all the provided arguments.
 *         0, if n == 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	unsigned int index, sum;

	index = 0;
	sum = 0;

	if (n == 0)
		return (0);

	va_start(ptr, n);
	for (; index < n; index++)
		sum += va_arg(ptr, int);

	va_end(ptr);

	return (sum);
}
