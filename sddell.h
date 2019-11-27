#ifndef _SDDELL_
#define _SDDELL_
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <dirent.h>
#include <sys/types.h>
#include <sys/wait.h>

extern char **environ;
char **divide_buffer(char *buffer);
void exe(char **arrp);
void sigintHandler();
void env_sh(char **arrp);
int _strcmp(char *str1, char *str2);
void print_sh(char *s);
int _strlen(char *c);
void exit_sh(char *buffer, int buf);
#endif /* _SDDELL_ */
