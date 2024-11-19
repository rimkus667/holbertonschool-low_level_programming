#include <stdio.h>
/**
 * int_index - check if a number is equal to 98
 * @array: the integer to check
 * @size: taile
 * @cmp: cmp
 * Return: 0 if false, something else otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || cmp == NULL || size <= 0)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
return (-1);
}
