#include "main.h"

/**
 * is_prime_number - It returns 1 if the input integer is a prime number,
 *                   otherwise return 0.
 * @n: The input integer to check.
 *
 * Return: 1, if ok.
 *         0, of not.
 */
int is_prime_number(int n)
{
	static int i = 2;

	if((n % i == 0) && (n !=(2)))
		return (0);
	else if (i < _sqrt_recursion(n))
	{
		i++;
		return (is_prime(n));
	}
	return (1);
}
