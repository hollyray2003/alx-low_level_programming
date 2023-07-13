#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid  - frunction to freeup grid
 * @grid: grid arguement
 * @height: arguement height of grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (height <= 0)
		return;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
