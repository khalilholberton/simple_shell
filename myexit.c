#include "sddell.h"
/**
 * exit_sh - function that exit the shell
 * @buffer : is char type
 * return : nothing
 */
void exit_sh(char *buffer)
{
if (_strcmp(buffer, "exit\n") == 0)
{
free(buffer);
exit(1);
}
}
