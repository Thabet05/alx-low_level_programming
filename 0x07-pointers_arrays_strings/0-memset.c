#include "main.h"
/**
 * _memset - fills memory with constant bytes
 * @s: src string
 * @b: dis charecter
 * @n: number of bytes
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (index = 0; index < n; index++)
		s[index] = b;

	return (s);
}
