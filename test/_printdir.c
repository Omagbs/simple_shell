#include "shell.h"

/**
 * _printdir - prints each directory contained in the environment variable PATH
 *
 * Return: nothing
 */

void _printdir(void)
{
	extern char **environ;
	int i, j = 0;
	char *dir = _getenv("PATH");

	for (i = 0; dir[i] != '\0'; i++)
	{
		if (dir[i] == ':')
		{
			for (; j < i; j++)
				printf("%c", dir[j]);
			printf("\n");
			j = i + 1;
		}
		if (dir[i + 1] == '\0')
		{
			for (; j < i + 1; j++)
				printf("%c", dir[j]);
			printf("\n");
		}
	}
}
