#include "shell.h"

/**
 * main - execve example
 *
 * Return: 0 on sucess
 */

int main(int argc, char *argv[])
{
	char *args[] = {argv[1], argv[2], argv[3], NULL};

	if (argc < 2)
	{
		fprintf(stderr, "Usage: %s <exe_filename> <args...>\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	execve(argv[1], args, NULL);
	printf("execve failed");

	return (0);
}
