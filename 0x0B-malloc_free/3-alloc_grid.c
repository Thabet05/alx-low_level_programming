#include "main.h"
/**
 * alloc_grid - a function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: input width of the matrix
 * @height: input height of the matrix
 * Return: 0 or a pointer to the matrix
 */
int **alloc_grid(int width, int height)
{
	int **point;
	int h, w;

	if (width == 0 || height == 0)
		return (NULL);
	point = malloc(sizeof(int) * height);
	if (point == 0)
		return (NULL);
	for (h = 0; h < height; h++)
	{
		point[h] = malloc(sizeof(int) * width);
		if (point[h] == 0)
		{
			for (w = 0; w < h; w++)
			{
				free(point[w]);
			}
			free(point);
			return (0);
		}
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
		{
			point[h][w] = 0;
		}
	}
	return (point);
}
