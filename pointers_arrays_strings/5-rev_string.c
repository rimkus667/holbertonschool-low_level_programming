#include "main.h"
/**
 * rev_string - check the code
 * @s : var
 * Return: Always 0.
 */
void rev_string(char *s)
{
int i, j;
char temp;
for (i = 0; s[i] != '\0'; i++)
;
for (j = 0; j < i / 2; j++)
{
temp = s[j];
s[j] = s[i - j - 1];
s[i - j - 1] = temp;
}
}
