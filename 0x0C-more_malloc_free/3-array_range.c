#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: a pointer to an array of intigers
 */
int *array_range(int min, int max)
{
	int ind1, ind2;
	int *p;

	if (min > max)
		return (0);
	ind2 = max - min + 1;
	p = malloc(sizeof(int) * ind2);
	if (p == 0)
		return (0);
	for (ind1 = 0; ind1 < ind2; ind1++)
	{
		p[ind1] = min;
		min++;
	}
	return (p);
}
