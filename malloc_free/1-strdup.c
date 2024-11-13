#include "main.h"
#include <stdlib.h>
/**
 * _strdup - prints buffer in hexa
 * @str: the address of memory to print
 * Return: Nothing.
 */
char *_strdup(char *str)
{
int longa = 0;
int i = 0;
char *tab;
if (str == NULL)
{
return (NULL);
}
while (str[longa] != '\0')
{
longa++;
}
tab = malloc((longa + 1) * sizeof(*tab));
if (tab == NULL)
{
return (NULL);
}
for (i = 0; i < longa; i++)
{
tab[i] = str[i];
}
tab[longa] = '\0';
return (tab);
}
