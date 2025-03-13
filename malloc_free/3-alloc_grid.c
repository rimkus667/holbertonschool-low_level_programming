#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Alloue un tableau 2D de dimensions width x height.
 * @width: Nombre de colonnes.
 * @height: Nombre de lignes.
 *
 * Return: Pointeur vers le tableau 2D ou NULL si l'allocation échoue.
 */
int **alloc_grid(int width, int height)
{
	int a, b;
	int **tab;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
tab = malloc(height * sizeof(int *));
if (tab ==  NULL)
{
	return (NULL);
}
for (a = 0; a < height; a++)
{
	tab[a] = malloc(width * sizeof(int));
	if (tab[a] == NULL)
	{
		return (NULL);
	for (b = 0; b < a; b++)
	{
		free(tab[b]);
	}
	free(tab);
	return (NULL);
	}
			for (b = 0; b < width; b++)
			{
			tab[a][b] = 0;
			}
}
	return (tab);
}
