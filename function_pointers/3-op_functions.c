#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - Struct op
 * @a: The operator
 * @b: The function associated
 * Return: 0
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - Struct op
 * @a: The operator
 * @b: The function associated
 * Return: 0
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - Struct op
 *
 * @a: The operator
 * @b: The function associated
 * Return: 0
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - Struct op
 *
 * @a: The operator
 * @b: The function associated
 * Return: 0
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}
/**
 * op_mod - Struct op
 *
 * @a: The operator
 * @b: The function associated
 * Return: 0
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
