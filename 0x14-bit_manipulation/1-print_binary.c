#include "main.h"
/**
 * print_binary - a function prints the binary representation of a number
 * @n: the input number
 * Return: the binary number
 */
void print_binary(unsigned long int n)
{
	unsigned long int b = 1;

	if (n == 0)
	{
		printf("0");
		return;
	}
	b <<= ((sizeof(unsigned long int) * 8) - 1);
	while ((n & b) == 0)
		b >>= 1;
	while (b > 0)
	{
		if (n & b)
			printf("1");
		else
			printf("0");
		b >>= 1;
	}
}
