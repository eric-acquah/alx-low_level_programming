#include <stdlib.h>
#include "main.h"

/**
 *free_grid - free memory allocated to 2d array
 *@grid: pointer to 2d array object
 *@height: Number of row pointers
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
