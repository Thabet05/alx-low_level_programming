#include "main.h"
/**
 * *create_array - a function that creates an array of chars
 *  and initializes it with a specific char
 *  @size: the input size
 *  @c: the input char
 *  Return: 0 if 'size = 0 , fail'  or pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
