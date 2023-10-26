#include "main.h"
/**
 * set_bit - a function that sets the value of a bit to 1 at a given index
 * @n: the input binnary number
 * @index: s the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int k = 1;

	if (n == 0 || index > 63)
		return (-1);
	while (index > 0)
	{
		k = k << 1;
		index--;
	}
	*n = *n | k;
	return (1);
}
