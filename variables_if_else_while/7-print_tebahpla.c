#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
char delta;
for (delta = 'z'; delta >= 'a'; delta = delta - 1)
{
putchar (delta);
}
putchar('\n');
return (0);
}
