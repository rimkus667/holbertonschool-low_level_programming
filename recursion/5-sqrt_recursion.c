#include "main.h"
/**
 * _sqrt_recursion - coco
 * @n: nombre
 * @x: num
 * Return: Always 0.
 */
int _sqrt_helper(int n, int x);
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (_sqrt_helper(n, 0));
}
/**
 * _sqrt_helper - check the code
 * @n: no
 * @x: yes
 * Return: Always 0.
 */
int _sqrt_helper(int n, int x)
{
if (x * x == n)
{
return (x);
}
if (x * x > n)
{
return (-1);
}
return (_sqrt_helper(n, x + 1));
}
