#include "main.h"
/**
 * malloc_checked - Allocates memory using malloc
 * @b: The number of bytes to allocate
 *
 * Return: Pointer to the allocated memory, or exit with status 98 if failed
 */
void *malloc_checked(unsigned int b)
{
	char *check;

	check = malloc(b);
	if (!check)
{
	exit(98);
}
return (check);
}
