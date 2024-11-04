#include "main.h"
/**
 * _memcpy - fonction
 * @dest: prints buffer in hexa
 * @src: the address of memory to print
 * @n: the size of the memory to print
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int compt;
for (compt = 0; compt < n; compt++)
{
*(dest + compt) = *(src + compt);
}
return (dest);
}
