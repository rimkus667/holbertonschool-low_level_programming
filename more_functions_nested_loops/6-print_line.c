#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_line(int n)
{
int u;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (u = 0; u <= n; u++)
{
_putchar('_');
}
}
}