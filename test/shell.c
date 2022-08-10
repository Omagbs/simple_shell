#include "shell.h"

/**
 * _getline - reads command entered by the user
 *
 * Return: line read
 */

char *_getline(void)
{
        char *line = NULL;

        printf("#cisfun$ ");

        line = malloc(sizeof(*line) * 1024);
        if (line == NULL)
                return (NULL);

        scanf("%[^\n]s", line);

        return (line);
}

/**
 * main - a super simple shell that can run commands with their full path,
 *	  without any arguments
 *
 * Return: always 0
 */

int main()
{
	char *cmd = _getline();
	char *args[] = {cmd, NULL, NULL};

	execve(cmd, args, NULL);
	printf("execution failed\n");

	return (0);
}
