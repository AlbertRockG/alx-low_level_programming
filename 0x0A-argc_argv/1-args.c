#include <stdio.h>
#include <stdlib.h>

/**
 * main - It prints the number of arguments passed into it.
 * @argc: The number of arguments passed.
 * @argv: The vector of the arguments passed.
 *
 * Return: EXIT_SUCCESS, if ok.
 *         EXIT_FAILURE, if not.
 */
int main(int argc, char __attribute__((__unused__)) **argv)
{
	printf("%d\n", argc - 1);

	return (0);
}
