#include "shell.h"

/**
 * main - program that prints the environment using the global variable environ
 * @argc: arguments counter
 * @argv: pointer to array of arguments
 * @env: pointer to array of strings,containing the environment variables
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i = 0;
	extern char **environ;

	if (argc > 1)
	{
		fprintf(stderr, "Usage: %s\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	while (environ[i] != NULL)
	{
		printf("[%i] %s\n", i, environ[i]);
		i++;
	}

	printf("[environ] %p\n", *environ);
	return (0);
}
