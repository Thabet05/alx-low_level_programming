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
	unsigned int i;

	va_start(args, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		char *string = va_arg(args, char*);

		if (string == 0)
			printf("(nil)");
		printf("%s", string);
		if (separator && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
