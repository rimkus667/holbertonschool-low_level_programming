#include "main.h"

/**
 * print_diagonal - diagonal line
 * @n : nombre de slash
 * Return: Always 0.
 */
void print_diagonal(int n)
{
int espace = 0;
int slash = 0;
if (n <= 0)
{
_putchar('\n');
}
else
{
while (slash < n)
{
while (espace < slash)
{
_putchar(' ');
espace = espace + 1;
}
_putchar('\\');
_putchar('\n');
slash = slash + 1;
espace = 0;
}
}
}