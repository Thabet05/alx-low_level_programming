#include "main.h"
/**
 * _isdigit - function that checks for a digit
 * @c: the input ascii
 * Return: 1 if @c is a digit or 0 otherwise
 */
int _isdigit(int c)
{
	if (c > 47 && c <58)
		return (1);
	return (0);
}
