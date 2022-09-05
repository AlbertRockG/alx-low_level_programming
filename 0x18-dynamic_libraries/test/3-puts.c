#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: the string to be printed.
 *
 * Return: nothing (void).
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}

	_putchar('\n');
}
