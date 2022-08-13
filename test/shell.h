#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * struct list_s - singly linked list of environment variables
 * @var: environment variable
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */

typedef struct list
{
	char *var;
	struct list *next;
} list_t;

char *_getline(void);
char *_getenv(const char *name);
void _printdir(void);

#endif /*SHELL_H*/
