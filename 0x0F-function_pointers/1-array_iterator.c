#include "function_pointers.h"
/**
 * array_iterator - a function that executes a function given
 * as a parameter on each element of an array
 * @array: the input array
 * @size: size of input array
 * @action: a pointer function
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;

	if (array && action)
	{
		for (index = 0; index < size; index++)
		{
			action(array[index]);
		}
	}
}
