#include "main.h"
/**
 * _memset - Fills memory with a constant byte
 * @s: Pointer to the memory area
 * @b: Constant byte to fill
 * @n: Number of bytes to fill
 *
 * Return: Pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
{
	s[a] = b;
}
return (s);
}
