#include "lists.h"
void _constructor(void) __attribute__ ((constructor));
/**
 * _constructor - execute before main()
 * Return: 0
 */
void _constructor(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house ");
	printf("upon my back!\n");
}
