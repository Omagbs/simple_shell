#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments to the program
 * @ac: argument counter
 * @av: pointer to array containing arguments
 *
 * Return: Always 0
 */

int main(int ac, char *av[])
{
	int i = 1;

	while (av[i] != NULL)
	{
		printf("%s\n", av[i]);
		i++;
	}

	return (0);
}
