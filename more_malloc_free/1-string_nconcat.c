#include "main.h"
#include <stdio.h>
/**
 * string_nconcat - prints buffer in hexa
 * @s1: the address of memory to print
 * @s2: the size of the memory to print
 * @n: i
 * Return: Nothing.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = 0, len2 = 0, i, j;
char *result;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[len1] != '\0')
{
len1++;
}
while (s2[len2] != '\0')
{
len2++;
}
if (n >= len2)
{
n = len2;
}
result = malloc(sizeof(char) * (len1 + n + 1));
if (result == NULL)
{
return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
{
result[i] = s1[i];
}
for (j = 0; j < n; j++)
{
result[i + j] = s2[j];
}
result[i + j] = '\0';
return (result);
}
