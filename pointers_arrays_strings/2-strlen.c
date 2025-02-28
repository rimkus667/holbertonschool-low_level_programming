#include "main.h"
#include <stdio.h>
/**
 * _strlen - Returns the length of a string
 * @s: The string to measure
 * Return: c
 */
int _strlen(char *s)
{
int c;
for (c = 0; s[c] != '\0'; c++)
;
{
return (c);
}
}
