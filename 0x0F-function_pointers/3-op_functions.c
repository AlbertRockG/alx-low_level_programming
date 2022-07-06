#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - It returns the sum of @a and @b.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The sum of @a and @b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - It returns the difference of @a and @b.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The difference of @a and @b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - It returns the product of @a and @b.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The product of @a and @b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - It returns the quotient of @a by @b.
 * @a: The dividend.
 * @b: The divisor (b != 0).
 *
 * Return: The quotient of @a by @b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - It returns the remainder of the division of
 *          @a by @b.
 * @a: The dividend.
 * @b: The divisor (b != 0).
 *
 * Return: The remainder of the division of @a by @b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
