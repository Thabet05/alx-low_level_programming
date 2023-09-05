#include "main.h"
/**
 * free_grid - a function that frees a 2 dimensional grid previously
 * created by your alloc_grid function
 * @height: the input height of the matrix
 * @grid: the input matrix
 * Return: success
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
	{
		free(grid[index]);
	}
	free(grid);
}
