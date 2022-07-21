#include "main.h"
#include <stdlib.h>

/**
 * set_bit - It set the value of a bit to 1 at a given index.
 * @n: The given unsigned long integer.
 * @index: The given index.
 *
 * Return: -1, if failed
 *          1, if worked.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
