#include "main.h"

/**
 * print_line - Draws a straight line using the character '_'
 * @n: The number of times '_' should be printed
 * Return: void
 */
void print_line(int n)
{
int c;
if (n == '0')
{
_putchar('\n');
}
for (c = 0; c < n; c++)
{
_putchar('_');
}
_putchar('\n');
}
