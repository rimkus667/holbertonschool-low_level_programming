#include "main.h"
#include <stdlib.h>
/**
 * simple_print_buffer - prints buffer in hexa
 * @c: the address of memory to print
 * @size: the size of the memory to print
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
unsigned int s = 0;
char *cha;
cha = malloc(size * sizeof(*cha));
if (size == 0)
{
return (NULL);
}
if (cha == NULL)
{
return (NULL);
}
for(;s < size; s++)
{
cha[s] = c;
}
return(cha);
}
