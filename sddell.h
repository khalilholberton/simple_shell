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
<<<<<<< HEAD
void sigintHandler(int num);
=======
void sigHandler(int num);
>>>>>>> 3444d35317fc805a09b8a8af6f4c1a15f3b70748
void env_sh(char **arrp);
int _strcmp(char *str1, char *str2);
void print_sh(char *s);
int _strlen(char *c);
void exit_sh(char *buffer, int buf);
#endif /* _SDDELL_ */
