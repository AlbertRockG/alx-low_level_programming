#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - It executes a function given
 *                  as a parameter on each element
 *                  of an array.
 * @array: The given array.
 * @size: The size of the array.
 * @action: A pointer to the function to use.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index = 0;

	if (array == NULL || size == 0 || action == NULL)
		return;

	for (; index < size; index++)
		action(array[index]);
}
