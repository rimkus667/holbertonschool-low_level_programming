#include "main.h"
#include <stdlib.h>
/**
 * free_grid - c
 * @grid : o
 * @height : m
*/
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
