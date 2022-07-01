#include "main.h"
/**
 * puts2 - It prints every other character of a string,
 *         starting with the first character followed
 *         by a new line.
 * @str: The string to be printed.
 *
 * Return: nothing.
 */
void puts2(char *str)
{
	int index;

	for (index = 0; str[index]; index = index + 2)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
