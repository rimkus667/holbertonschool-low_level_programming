#include "main.h"
/**
 * free_grid - Libère une grill
 * @grid: taille de la grille
 * @height: Le nombre de lignes dans la grile
 */
void free_grid(int **grid, int height)
{
	int a = 0;

	for (; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}

