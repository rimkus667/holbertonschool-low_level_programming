#include "function_pointers.h"
/**
 * int_index - searches integer.
 * @array: int array
 * @size: size array
 * @cmp: ptr
 *
 * Return: 0 if false, something else otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int a;

if (array == NULL || cmp == NULL)
{
return (-1);
}
for (a = 0; a < size; a++)
{
if (cmp(array[a]) != 0)
{
return (a);
}
}
return (-1);
}
