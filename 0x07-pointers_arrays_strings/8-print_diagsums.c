#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -  a function that prints the sum of the
 * two diagonals of a square matrix of integersr
 * @a: square matrix
 * @size: size of the array
 */
void print_diagsums(int *a, int size);
{
	int i, s1 = 0, s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 = s1 + a[i * size + i];
		s2 += a[i * size + (size - i - 1)];
	}
	printf("%d, ", s1);
	printf("%d\n", s2);
}
