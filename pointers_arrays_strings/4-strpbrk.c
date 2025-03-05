#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The set of characters to match.
 *
 * Return: Pointer to the first occurrence of any character from accept
 *         in the string s, or NULL if no match is found.
 */
char *_strpbrk(char *s, char *accept)
{
int a, b;

for (a = 0; s[a]; a++)
{
	for (b = 0; accept[b]; b++)
	{
		if (s[a] == accept[b])
		{
			return (a + s);
		}
	}
}
return (NULL);
}
