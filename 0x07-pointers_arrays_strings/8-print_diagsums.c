#include "main.h"

/**
 * print_diagsums -  a function that prints the sum of the
 * two diagonals of a square matrix of integersr
 * @a: square matrix
 * @size: size of the array
 */
void print_diagsums(int *a, int size);
{
	int i, e = 0, f = 0;

	for (i = 0; i < size; i++)
	{
		e += a[i];
		f += a[size - i - 1];
		a += size;
	}
	printf("%d, ", e);
	printf("%d\n", f);
}
