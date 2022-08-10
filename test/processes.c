#include "shell.h"

/**
 * main - fork + wait + execve exercise
 *
 * Return: Always 0.
 */

int main(void)
{
	pid_t child;
	char *args[] = {"/bin/ls", "-l", "/tmp", NULL};
	int status, i;

	child = fork();

	for (i = 0; i < 5; i++)
	{
		if (child == -1)
		{
			perror("Error:");
			return (-1);
		}
		if (child == 0)
		{
			printf("I am a child [%d]\n", getpid());
			sleep(2);
			execve(args[0], args, NULL);
		}
		else
		{
			wait(&status);
			child = fork();
		}
	}

	return (0);
}
