#include "main.h"
/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: int number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int index1 = 0, decimal = 0;

	if (b == NULL)
		return (0);
	while (b[index1] != 0)
	{
		decimal <<= 1;
		if (b[index1] == '1')
			decimal++;
		else if (b[index1] != '0')
			return (0);
		index1++;
	}
	return (decimal);
}
