#include "main.h"
#include "stdlib.h"

/**
 * malloc_checked - It allocates memory using malloc.
 * @b: The size of memory to be allocated.
 *
 * Return: A void pointer.
 */
void *malloc_checked(unsigned int b)
{
	if (malloc(b) == NULL)
		exit(98);

	return (malloc(b));
}
