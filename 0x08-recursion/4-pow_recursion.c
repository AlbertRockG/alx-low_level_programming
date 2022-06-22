#include "main.h"

/**
 * _pow_recursion - It computes the value of x raised to
 *                  the power of y.
 * @x: The value of x.
 * @y: The value of y.
 *
 * Return: The value of x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (x == 0)
		return (0);
	return (x * _pow_recursion(x, y - 1));
}
