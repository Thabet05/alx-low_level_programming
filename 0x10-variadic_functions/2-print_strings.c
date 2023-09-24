#include "variadic_functions.h"
/**
 * print_strings - variadic function that prints strings,followed by a new line
 * @separator: is the string to be printed between the strings
 * @n: the number of inputs
 * Return: the string of inputs or 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int s = 0;
	unsigned int i;

	va_start(args, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		char strings = va_arg(args, char);
	}
	va_end(args);
	return (strings);
}
