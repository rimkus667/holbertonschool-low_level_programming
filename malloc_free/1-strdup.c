#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - check the code
 * @str: var
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	int a;
	int b;
	char *c;

	if (str == NULL)
{
	return (NULL);
}
for (a = 0; str[a] != '\0'; a++)
{
	;
}
c = malloc(a * sizeof(char) + 1);

if (c == NULL)
{
	return (NULL);
}
for (b = 0; b < a; b++)
{
	c[b] = str[b];
}
c[b] = '\0';
return (c);
}
