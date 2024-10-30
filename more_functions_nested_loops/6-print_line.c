#include "main.h"
/**
 * print_line - check the code
 * @n : nombre de lignes
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
for (u = 1; u <= n; u++)
{
_putchar('_');
}
_putchar('\n');
}
}
