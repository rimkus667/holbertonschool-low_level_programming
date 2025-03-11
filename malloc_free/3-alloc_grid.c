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
	int **grille;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
