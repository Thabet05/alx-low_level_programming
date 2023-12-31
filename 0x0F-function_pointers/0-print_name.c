#include "function_pointers.h"
/**
 * print_name - a function that prints a name
 * @name: the input string
 * @f: function pointer
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		(*f)(name);
}
