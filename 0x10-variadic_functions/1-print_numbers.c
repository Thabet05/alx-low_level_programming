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
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		printf("%d", x);
		if (separator == 0 && i < (n - 1))
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
