#include "main.h"
/**
 * _strlen - Returns the length of a string
 * @s: The string to measure
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	;

	return (i);
}
/**
 * str_concat - check the code
 * @s1: chaine1
 * @s2: chaine2
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
int a1, a2;
char *memo;

if (s1 == NULL)
{
	s1 = "";
}
if (s2 == NULL)
{
	s2 = "";
}
memo = malloc(_strlen(s1) + _strlen(s2) + 1);
if (memo == NULL)
{
	return (NULL);
}
for (a1 = 0; s1[a1] != '\0'; a1++)
{
	memo[a1] = s1[a1];
}
for (a2 = 0; s2[a2] != '\0'; a2++, a1++)
{
	memo[a1] = s2[a2];
}
memo[a1] = '\0';
return (memo);
}
