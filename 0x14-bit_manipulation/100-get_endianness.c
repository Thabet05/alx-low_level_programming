#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 1 if little endian 0 if big endian
 */
int get_endianness(void)
{
	int index = 1;

	index >>= 1;
	if (!index)
		return (1);
	else
		return (0);
}
