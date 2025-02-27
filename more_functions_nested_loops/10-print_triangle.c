#include "main.h"
/**
 * print_triangle - Prints a triangle followed by a new line
 * @size: The size of the triangle
 *
 * Description: If size is 0 or less, only a new line is printed.
 * The triangle is printed using the character '#'.
 */
void print_triangle(int size)
{
	int a, b;
	if (size <= 0)
{
	_putchar('\n');
	return;
}
	for (a = 0; a < size; a++)
{
	for (b = 0; b < (size - i - 1); b++)
{
	_putchar(' ');
}
	for (b = 0; b < (i + 1); b++)
{
	_putchar('#');
}
	_putchar('\n');
}
}
