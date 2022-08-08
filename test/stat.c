#include "shell.h"

/**
 * main - a program that looks for files in the current PATH
 * @argc: arguments counter
 * @argv: pointer to array containing arguments
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i = 1;
	struct stat st;

	if (argc < 2)
	{
		fprintf(stderr, "Usage: %s filename\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	while (i < argc)
	{
		printf("%s:", argv[i]);

		if (stat(argv[i], &st) == 0)
			printf(" FOUND\n");
		else
			printf(" NOT FOUND\n");
		i++;
	}
	return (0);
}
