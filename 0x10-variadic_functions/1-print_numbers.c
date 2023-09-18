#include "variadic_functions.h"
/**
 * print_numbers - variadic function that prints numbers
 * @n: the number of inputs
 * @separator: string to be printed between numbers
 * Return: input numbers or 0
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int s = 0;
	unsigned int i;

	va_start(args, n);
	if (separator == 0)
		return (NULL);
	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		printf("%d", x);
	}
	va_end(args);
	printf("\n");
}
