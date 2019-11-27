#include "sddell.h"
#define  BUFSIZE_sh 32
#define STR_PROMPT "#cisfun$"
/**
 * main - Entry point
 *
 *
 * Return: return(0)
 */
int main(void)
{
signal(SIGINT, sigHandler);
while (1)
{
char *st = STR_PROMPT;
print_sh(st);
char *buffer = NULL;
size_t bufsize = BUFSIZE_sh;
size_t buf;

buffer = (char *)malloc(bufsize * sizeof(char));
if (buffer == NULL)
{
perror("Unable to allocate buffer");
exit(1);
}

buf = getline(&buffer, &bufsize, stdin);
if (buf  == EOF)
{
write(STDOUT_FILENO, "\n", 1);
exit(0);
}
exit_sh(buffer, buf);

char **arrp = divide_buffer(buffer);
exe(arrp);
if (arrp && arrp[0])
env_sh(arrp);
}
return (0);
}
