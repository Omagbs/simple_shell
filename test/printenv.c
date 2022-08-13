#include "shell.h"

/**
 * main - program that prints the environment using the global variable environ
 * @argc: arguments counter
 * @argv: pointer to array of arguments
 * @env: pointer to array of strings,containing the environment variables
 *
 * Return: always 0
 */

int main(int argc, char *argv[], char *env[])
{
	int i = 0;

	if (argc > 1)
	{
		fprintf(stderr, "Usage: %s\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	while (env[i] != NULL)
	{
		printf("[%i] %s\n", i, env[i]);
		i++;
	}

	printf("[env] %p\n", *env);
	return (0);
}
