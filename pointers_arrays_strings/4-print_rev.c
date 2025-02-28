#include "main.h"
/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: The string to be printed in reverse.
 */
void print_rev(char *s)
{
int a;
for (a = 0; s[a] != '\0'; a++)
;
{
for (a--; a >= 0; a--)
{
_putchar(s[a]);
}
_putchar('\n');
}
}
