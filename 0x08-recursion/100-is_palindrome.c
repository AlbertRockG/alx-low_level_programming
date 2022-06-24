#include "main.h"
#include <stdio.h>

int check_if_palindrome(char *s, int index1, int index2);

/**
 * _strlen_recursion - It returns the length of a string.
 * @s: The given string.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_if_palindrome - It checks if a string is a palindrome.
 * @s: The given string to ckeck.
 * @index1: The index of the character to ckeck.
 * @index2: The index of the second character to check.
 *
 * Return: 1, if palindrome.
 *         0, if not.
 */
int check_if_palindrome(char *s, int index1, int index2)
{
	if (index1 ==  index2)
	{
		return (1);
	}
	if (*(s + index1) != *(s + index2))
		return (0);
	if (index1 < index2 + 1)
		return (check_if_palindrome(s, index1 + 1, index2 - 1));
	return (1);
}


/**
 * is_palindrome - It checks if a string is a palindrome.
 * @s: The given string to ckeck.
 *
 * Return: 1, if palindrome.
 *         0, if not.
 */
int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	if (*s == '\0')
		return (1);
	return (check_if_palindrome(s, 0, length - 1));
}
