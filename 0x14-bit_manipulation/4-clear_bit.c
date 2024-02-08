#include "main.h"
/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index
 * @n: binnary number
 * @index: is the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int k = 1;

	if (n == 0 || index > 63)
		return (-1);
	while (index > 0)
	{
		k = k << 1;
		index--;
	}
	k = ~k;
	*n = *n & k;
	return (1);
}
