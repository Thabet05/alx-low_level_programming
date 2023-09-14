#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer
 * @array: the input array
 * @size: the size of the array
 * @cmp: the function pointer
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			a = cmp(array[i]);
			if (a)
				return (i);
		}
	}
	return (-1);
}
