#include "main.h"
#include <stdio.h>

/**
 * _isupper - Check if is uppercase.
 *
 * @c : number
 *
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
