#include "main.h"
/**
 * _memset - fonction
 * @s: prints buffer in hexa
 * @b: the address of memory to print
 * @n: the size of the memory to print
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int compt;
for (compt = 0; compt < n; compt++)
{
*s = b;
s++;
}
return (s);
}