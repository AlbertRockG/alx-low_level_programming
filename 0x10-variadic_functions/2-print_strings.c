#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - A function prints strings,
 *                 followed by a new line.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 *
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *mystring;
	unsigned int index = 0;

	va_start(strings, n);
	for (; index < n; index++)
	{
		mystring = va_arg(strings, char *);

		if (mystring == NULL)
			printf("(nil)");
		else
			printf("%s", mystring);

		if (separator != NULL && index < (n - 1))
			printf("%s", separator);
	}

	va_end(strings);

	printf("\n");
}
