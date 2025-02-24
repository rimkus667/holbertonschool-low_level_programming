#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - The last digit of a number
 * @n: Integer
 *
 * The last digit of `n`
 */
int print_last_digit(int n)
{
int b;
			b = abs(n % 10);
_putchar(b + '0');
			return (b);
}
