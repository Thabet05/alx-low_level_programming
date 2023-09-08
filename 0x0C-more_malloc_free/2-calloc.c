#include "main.h"
/**
 * _calloc - allocate memory for an array
 * @nmemb: number of elements of the array
 * @size: size of an element of the array
 * Return: a pointer to allocating memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *q;
	if (nmemb == 0 || size == 0)
		return (0);
	q = malloc(nmemb * size);
	if (q == 0)
		return (0);
	memset(q, 0, nmemb * size);
	return (q);
}
