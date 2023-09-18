#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: the number of inputs
 * return: the sum of inputs or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);
	if (n == 0)
		return (0);
	int s = 0;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
