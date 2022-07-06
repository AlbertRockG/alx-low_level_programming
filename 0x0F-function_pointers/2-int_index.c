#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - It seaches for an integer.
 * @array: The given array.
 * @size: The size of the array.
 * @cmp: A pointer to the function
 *       to be used to compare values.
 *
 * Return: -1, if no element matches or size <= 0;
 *         The index of the first element of which
 *         @cmp does not return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
