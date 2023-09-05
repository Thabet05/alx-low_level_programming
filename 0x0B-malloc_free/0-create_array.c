#include "main.h"
/**
 *  create_array - a function that creates an array of chars
 *  and initializes it with a specific char
 *  @size: the input size
 *  @c: the input char
 *  Return: 0 if 'size = 0 , fail'  or pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *q = malloc(sizeof(char) * size);
	unsigned int index;

	if (size == 0 || q == 0)
		return (0);
	for (index = 0; index < size; index++)
		p[index] = T;

	return (q);
}
