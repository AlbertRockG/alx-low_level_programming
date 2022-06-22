#include "main.h"

/**
 * _print_rev_recursion - It prints a string in reverse.
 * @s: The string to be printed.
 *
 * Return: nothing.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
