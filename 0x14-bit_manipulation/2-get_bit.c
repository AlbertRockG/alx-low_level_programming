#include "main.h"

/**
 * get_bit - It returns the value of a bit
 *           at a given index.
 * @n: The given unsigned long integer.
 * @index: The index, starting from 0 of
 *         bit you want to get.
 *
 * Return: The value of the bit at index `index`
 *         -1, otherwise.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
