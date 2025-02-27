#include "main.h"

/**
 * print_square - print square using the character '#'
 * @size: The number of times '#' should be printed
 * Return: void
 */
void print_square(int size)
{
int c, s;
	if (size <= '0')
{
	_putchar('\n');
	return;
}
	for (c = 0; c < size; c++)
{	
	for (s = 0; s < size; s++)
{
	_putchar('#');
}
	_putchar('\n');
}
}

