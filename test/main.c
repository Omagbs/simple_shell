#include "shell.h"

/**
 * main - tests for functions
 *
 * Return: always 0
 */

int main(void)
{
	char *env = _getenv("PATH");

	printf("%s\n", env);

	_printdir();
	return (0);
}
