#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_name - It prints a name.
 * @name: The name to be printed.
 * @f: The pointer to the function
 *     that prints the name.
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
