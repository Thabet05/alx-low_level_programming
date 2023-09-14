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
	int index, z;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (index = 0; index < size; index++)
		{
			z = cmp(array[index]);
			if (z)
				return (index);
		}
	}
	return (-1);
}
