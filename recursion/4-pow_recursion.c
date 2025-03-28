#include "main.h"
/**
 * _pow_recursion - Calculates x^y recursively.
 * @x: The base.
 * @y: The exponent.
 *
 * Return: x^y or -1 if y < 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (x);
}
