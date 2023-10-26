#include "main.h"
/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int index1 = 0;
	int index2 = 0;
	int decimal = 0;

	if (b == 0)
		return (0);
	for (index1; index1 <= strlen(b); index1++)
	{
		if (b[index1] != 0 | b[index1] != 1)
			return (0);
	}
	for (index2; index2 <= strlen(b); index2++)
	{
		 decimal += b[index2] * pow(2, index2);
	}
	return (decimal);
}
