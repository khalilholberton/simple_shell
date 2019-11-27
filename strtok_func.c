#include "sddell.h"
#define DEL " "
char **divide_buffer(char *buffer)
{
char **arrp;
arrp = malloc(sizeof(buffer));
int i = 0;
char *symbol = strtok(buffer, "\n");
symbol = strtok(symbol, DEL);
arrp[0] = symbol;
i = 1;
while (symbol)
{
symbol = strtok(NULL, DEL);
arrp[i] = symbol;
i++;
}
return (arrp);
}
