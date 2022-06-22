#include "main.h"

/**
 * _puts_recursion - It prints a string,
 *                   followed by a new line
 *                   with recursion.
 * @s: The string to print.
 *
 * Return: nothing.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
