#include <stdio.h>
/**
 * array_iterator - va
 * @array k
 * @size: k
 * @action: k
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array == NULL || action == NULL)
{
return;
}
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
