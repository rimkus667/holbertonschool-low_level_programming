#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2D array of size width x height.
 * @width: Number of columns.
 * @height: Number of rows.
 *
 * Return: Pointer to the 2D array or NULL if allocation fails.
 */
int **alloc_grid(int width, int height)
{
	int a, b;
	int **tab;

	if (width <= 0 || height <= 0)
		return (NULL);

	tab = malloc(height * sizeof(int *));
	if (tab == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		tab[a] = malloc(width * sizeof(int));
		if (tab[a] == NULL)
		{
			for (b = 0; b < a; b++)
				free(tab[b]);
			free(tab);
			return (NULL);
		}

		for (b = 0; b < width; b++)
			tab[a][b] = 0;
	}

	return (tab);
}

