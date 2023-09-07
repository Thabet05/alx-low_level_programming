#include "main.h"
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: the input integer
 * Return: pointer or cause normal process termination
 */
void *malloc_checked(unsigned int b)
{
	int *p = malloc(sizeof(unsigned int b));

	if (p == NULL)
		exit(98);
	return (p);
}
