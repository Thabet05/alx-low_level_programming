#include "main.h"
/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: binarry num
 * @index: is the index, starting from 0 of the bit you want to get
 * Retur: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (n == 0 || index > 63)
		return (-1);
	while (index >= 1)
	{
		n >>= 1;
		index--;
	}
	bit = n % 2;
	return (bit);
}
