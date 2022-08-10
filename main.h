#ifndef MAIN_H
#define MAIN_H

#include <stdlib>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <wait.h>
#include <fcntl.h>
#include <dirent.h>
#include <signal.h>

typedef struct list
{
	char var*
	struct list *next;
} list_t;

int prompt (char **env);
int _strcmp(char *s1, char *s2);

#endif
