#include "main.h"

/**
 * alloc_grid - prototype function of type int to return a 2D_array
 *
 * condition - checks if height or width valid before allocating memory to grid
 *
 * @width: variable representing the first integar of the array
 *
 * @height: variable representing the second integar of the array
 *
 * Return: returns a ponter to the alloted 2D grid
 */

int **alloc_grid(int width, int height)
{
	int i, n;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (n = 0; n < i; n++)
			{
				free(grid[n]);
			}
			free(grid);
			return (NULL);
		}

		for (n = 0; n < width; n++)
		{
			grid[i][n] = 0;
		}
	}
	return (grid);
}
