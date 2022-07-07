#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - A function that prints numbers,
 *                 followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int index;

	va_start(ptr, n);
	index = 0;
	for (; index < n; index++)
	{
		if (separator != NULL)
		{
			printf("%d", va_arg(ptr, int));

			if (index < n - 1)
				printf("%s", separator);
		}
		else
			printf("%d", va_arg(ptr, int));
	}
	va_end(ptr);

	printf("\n");
}
