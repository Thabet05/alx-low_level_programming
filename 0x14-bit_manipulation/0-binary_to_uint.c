#include "main.h"
/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int index1 = 0;
	unsigned int decimal = 0;

	if (b == 0)
		return (0);
	for (index1; index1 <= strlen(b); index1++)
	{
		decimal <<= 1;
		if (b[index1] == '1')
			decimal++;
		else if (b[index1] != '0')
			return (0);
	}
	return (decimal);
}
