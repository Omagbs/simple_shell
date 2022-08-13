#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _getline - reads line from stdin
 *
 * Return: pointer to memory containing read string
 */

char *_getline(void)
{
	char *line = NULL;

	printf("#simple_shell$ ");

	line = malloc(sizeof(*line) * 1024);
	if (line == NULL)
		return (NULL);

	scanf("%[^\n]s", line);

	return (line);
}
