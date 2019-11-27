#include "sddell.h"
/**
 * exit_sh - function that exit the shell
 * @buffer : is char type
 * @buf : is int type
 * return : nothing
 */
void exit_sh(char *buffer, int buf)
{
if (_strcmp(buffer, "exit\n") == 0)
{
free(buffer);
exit(1);
}
}
