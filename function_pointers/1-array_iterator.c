#include "function_pointers.h"
/**
 * array_iterator - array iterator
 * @array: array pointer
 * @size: size of array
 * @action: pointer
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
