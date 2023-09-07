#include "main.h"
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: the input integer
 * Return: pointer or 98
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(sizeof(unsigned int b));
	if (p == 0)
		exit(98);
	return (p);
}
