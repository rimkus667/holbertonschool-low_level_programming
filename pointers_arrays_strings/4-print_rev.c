#include "main.h"
/**
 * print_rev - check the code
 * @s : var
 * Return: Always 0.
 */
void print_rev(char *s)
{
int _putchar(char c);
int l, i;
for (l = 0; s[l] != '\0'; l++)
;
for (i = l - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
