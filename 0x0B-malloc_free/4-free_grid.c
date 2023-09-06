#include "main.h"

/**
 * free_grid - protype function of type void to free previous 2_D grid
 *
 * condition - checks if grid is NULL before freeing each rows and memories
 *
 * @grid: variable representing a 2_D array of intergers
 *
 * @height: variable representing the number of rows in the grid
 *
 * Return: returns nothing after freeing the the memory alloted
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
		grid[i] = NULL;
	}
	free(grid);
}
