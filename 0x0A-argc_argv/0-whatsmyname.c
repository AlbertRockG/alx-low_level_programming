#include <stdio.h>
#include <stdlib.h>

/**
 * main - It prints its own name.
 * @argc: The number of command line parameters.
 * @argv: The vector of string.
 *
 * Return: EXIT_SUCCESS, if ok.
 *         EXIT_FAILURE, if not.
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", argv[0]);
	exit(EXIT_SUCCESS);
}
