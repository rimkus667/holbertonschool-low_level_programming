#include <stdlib.h>
#include <stddef.h>
/**
 * array_range - prints buffer in hexa
 * @min: the address of memory to print
 * @max: the size of the memory to print
 *
 * Return: Nothing.
 */
int *array_range(int min, int max)
{
int i;
int taille = max - min + 1;
int *array;
if (min > max)
{
return (NULL);
}
array = malloc(taille * sizeof(int));
if (array == NULL)
{
return (NULL);
}
for (i = 0; i < taille; i++)
{
array[i] = min + i;
}
return (array);
}
