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

	point = malloc(sizeof(int) * height);
	for (h = 0; h < height; h++)
		point = malloc(sizeof(int) * width);
	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);
	if (p == 0)
		return (NULL);
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			p[h][w] = 0;
	}
	return (p);
}
