#include "main.h"
/**
 * _memset - fills memory with constant bytes
 * @s: src string
 * @b: dis charecter
 * @n: number of bytes
 * Return: pointer to s string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		s[index] = b;

	return (s);
}
