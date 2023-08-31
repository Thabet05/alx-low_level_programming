#include "main.h"
/**
 * _sqrt_recursion - a function that returns the
 * natural square root of a number
 * @n: the input number
 * @m: intermidiaire value
 * Return: natural square of n
 */
int sqr(int n; int m);
int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}
/**
 * sqr - find square
 * @n: input int
 * @m: intermidiaire value
 * Return: number
 */
int sqr(int n; int m)
{
	if (m * m == n)
		return (m);
	if (m * m < n)
		return (sqr(n, m + 1));
	else
		return (-1)
}
