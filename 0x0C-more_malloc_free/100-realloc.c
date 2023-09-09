#include "main.h"
/**
 * _realloc - function reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size of the allocated space for the pointer 'ptr'
 * @new_size: new size in bytes of new memory block
 * Return: pointer to the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *q;

	if (new_size > old_size)
	{
		q = malloc(new_size);
		if (q == 0)
			return (0);
		memcpy(q, ptr, old_size);
		free(ptr);
		return (q);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == 0)
	{
		q = malloc(new_size);
		if (q == 0)
			return (0);
		return (q);
	}
	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (0);
	}
	return (0);
}
