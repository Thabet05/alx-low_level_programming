#include "main.h"
/**
 * _isalpha - a function that checks for alphabetic character
 * @c: the input ascii
 * Return: 0 or 1 
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	return (0);
}
