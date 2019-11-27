#include "sddell.h"
#define STR_CTRL_C "\n#cisfun$ "
/**
 * sigintHandler - function that handle the signals
 *
 *
 * Return: nothing
 */
void sigintHandler()
{
signal(SIGINT, sigintHandler);
char *ctrlc = STR_CTRL_C;
print_sh(ctrlc);
fflush(stdout);
}
/**
 * print_sh - function that print a string
 * @s : is char type
 * return : nothung
 */
void print_sh(char *s)
{
ssize_t fileno;
fileno = write(STDOUT_FILENO, s, _strlen(s));
if (fileno == -1)
{
perror("error");
}
return;
}
/**
 * env_sh - prints environment
 * @arrp: is char type
 *
 * Return: nothing
 */
void env_sh(char **arrp)
{
if (_strcmp(arrp[0], "env") == 0)
{
int count1;
int count2;

for (count1 = 0; environ[count1] != NULL; count1++)
{
for (count2 = 0; environ[count1][count2] != '\0'; count2++)
write(STDOUT_FILENO, &environ[count1][count2], 1);
write(STDOUT_FILENO, "\n", 1);
}
}
}
/**
 * _strcmp - function make comparison
 * @str1: is char type
 * @str2 : is char type
 * Return: integer
 */
int _strcmp(char *str1, char *str2)
{
unsigned int i = 0;

while (str1[i])
{
if (str1[i] != str2[i])
return (1);
++i;
}

return (0);
}
/**
 * _strlen - count the length of a string
 * @c:is char type
 *
 * Return: integer
 */
int _strlen(char *c)
{
int count;

if (c == NULL)
return (0);
for (count = 0; c[count] != '\0'; count++)
;
return (count);
}
