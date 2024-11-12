#include "main.h"
#include <math.h>
/**
 * is_prime_number - check the code
 * @n : nom
 * @i : non
 * Return: Always 0.
 */
int fonction_deux(int n, int i);
int is_prime_number(int n)
{
if (n <= 1)
return (0);
if (n == 2 || n == 3)
return (1);
return (fonction_deux(n, 2));
}
/**
 * fonction_deux - check the code
 * @n : non
 * @i : nom
 * Return: Always 0.
 */
int fonction_deux(int n, int i)
{
if (n == i)
return (1);
if (n % i == 0)
return (0);
return (fonction_deux(n, i + 1));
}
