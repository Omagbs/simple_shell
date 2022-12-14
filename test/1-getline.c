#include <stdio.h>
#include <stdlib.h>

/**
 * main - practice using getline
 *
 * Return: Always 0
 */

int main(void)
{
	ssize_t nread;
	char *lineptr = NULL;
	size_t n = 0;

	printf("$ ");

	nread = getline(&lineptr, &n, stdin);

	if (nread != -1)
	{
		printf("%s", lineptr);
	}

	free(lineptr);
	return (0);
}
