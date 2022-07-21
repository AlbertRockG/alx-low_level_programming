#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - It converts a binary number
 *                  to an unsigned int.
 * @b: The given binary number to convert.
 *
 * Return: 0 if there is one or more in b
 *           that is not 0 or 1.
 *           b is NULL.
 *         The converted number, otherwise.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, mult = 1;
	int length;

	if (b == NULL)
		return (0);

	for (length = 0; b[length]; length++)
		;

	for (length -= 1; length >= 0; length--)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);

		num += (b[length] - '0') * mult;
		mult <<= 1;
	}

	return (num);
}
