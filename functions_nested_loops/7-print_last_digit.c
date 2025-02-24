#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to extract the last digit from
 *
 * Return: The last digit of n
 */
int print_last_digit(int n)
{
int b;
b = abs(n % 10);
_putchar(b + '0');
return (b);
}
