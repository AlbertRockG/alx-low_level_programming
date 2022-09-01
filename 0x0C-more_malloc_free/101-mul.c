#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
#include <errno.h>
/**
 * main - It multiplies two positive numbers.
 * @argc: The number of arguments.
 * @argv: The array of arguments.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int base = 10;
	char *endptr1, *endptr2;
	long *num1, *num2;

	if (argc != 3)
	{
		fprintf(stderr, "Error\n");
		exit(98);
	}
	num1 = num2 = (long int*)malloc(sizeof(long int) * ULLONG_MAX)
	*num1 = strtoul(argv[1], &endptr1, base);
	*num2 = strtoul(argv[2], &endptr2, base);
	if (errno != 0)
	{
		fprintf(stderr, "Error\n");
		exit(98);
	}
	if ((endptr1 == argv[1]) || (*endptr1 != '\0'))
	{
		fprintf(stderr, "Error\n");
		exit(98);
	}
	if ((endptr2 == argv[2]) || (*endptr2 != '\0'))
	{
		fprintf(stderr, "Error\n");
		exit(98);
	}
	if ((*num1 < 0) || (*num2 < 0))
	{
		fprintf(stderr, "Error\n");
		exit(98);
	}
	printf("%ld\n", (*num1) * (*num2));

	free(num1);
	free(num2);

	return (0);
}
