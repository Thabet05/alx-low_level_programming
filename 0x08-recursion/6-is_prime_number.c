#include "main.h"
/**
 * is_prime_number - a function that returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: input number
 * Return : 1 if n prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	if (n % 2 == 0)
		return (0);
	return prime_numbers(n, 3)
}
/**
 * prime_numbers - secondary function
 * @n: input number
 * @m: intermediary input
 * Return: 1 if n prime, 0 otherwise
 */
int prime_numbers(int n, int m)
{
	if (m >= n)
		return (1);
	if (n % m == 0)
		return (0);
	return (prime_numbers(n, m + 2));
}
