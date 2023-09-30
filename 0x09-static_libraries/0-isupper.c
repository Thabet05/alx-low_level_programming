#include "main.h"
/**
 * _isupper - a function that checks for uppercase character
 * @c: the input ascii
 * Return: 1 if the letter is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	return (0);
}
