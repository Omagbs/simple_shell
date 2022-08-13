#include "shell.h"

/**
 * _getenv - gets the VALUE of an environment variable
 * @name: name of env_var to find
 * @env: environment variable
 *
 * Return: pointer to env_var VALUE
 */

char *_getenv(const char *name, char *env[])
{
	int i, j;
	int status;

	for (i = 0; env[i] != NULL; i++)
	{
		status = 1;

		for (j = 0; env[i][j] != '='; j++)
		{
			if (name[j] != env[i][j])
			{
				status = 0;
				break;
			}
		}
		if (status == 1)
			return (&env[i][j + 1]);
	}
	return (NULL);
}

