#include "main.h"

/**
 * factorial - It computes the factorial of the given number.
 * @n: The given number.
 *
 * Return: The factorial of the given number.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
