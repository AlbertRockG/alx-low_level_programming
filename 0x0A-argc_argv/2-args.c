#include <stdio.h>

/**
 * main - It prints all arguments it receives.
 * @argc: The number of arguments passed.
 * @argv: The vector of arguments passed.
 *
 * Return: 0.
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
