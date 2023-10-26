#include "main.h"
/**
 * counting_ones - count the number of ones in the binary number
 * @n: the input binnary number
 * Return: the number of ones
 */
int counting_ones(unsigned long int n)
{
	int t = 0;

	while (n)
	{
		t += n & 1;
		n >>= 1;
	}
	return (t);
}
/**
 * flip_bits - returns the number of bits need to flip
 * to get to another number
 * @n: the 1st input number
 * @m: the 2nd input number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int k;
	int ind;

	if (n == m || (m == 0 && n == 0))
		return (0);
	k = n ^ m;
	ind = count_ones(k);
	return (ind);
}
