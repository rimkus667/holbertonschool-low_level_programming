#include "main.h"
/**
 * print_array - Prints n elements of an array of integers
 * @a: Pointer to the array of integers
 * @n: Number of elements to print
 *
 * Description: This function prints n
 */
void print_array(int *a, int n)
{
int c;
for (c = 0; c < n; c++)
{
	printf("%d", a[c]);
		if (c < n - 1)
		{
			printf(", ");
		}
		}
	printf("\n");
}
