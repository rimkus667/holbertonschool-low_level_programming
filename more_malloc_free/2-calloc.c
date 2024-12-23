#include <stdlib.h>
#include <string.h>
/**
 * _calloc - prints buffer in hexa
 * @nmemb: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int total_size, i;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
total_size = nmemb * size;
ptr = malloc(total_size);
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < total_size; i++)
((char *)ptr)[i] = 0;
return (ptr);
}
