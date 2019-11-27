#include "sddell.h"
/**
 * exe - function that execute a program anf wait for it
 * @arrp: is char type
 *
 * Return: nothing
 */
void exe(char **arrp)
{
pid_t pid;
pid = fork();
if (pid == 0)
{
execve(arrp[0], arrp, NULL);
perror("error:");
exit(1);
}
else
wait(0);
}
