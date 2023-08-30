#include "main.h"
/**
 * _print_rev_recursion - a function that prints a string, followed by a new line
 * @s: the input string
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	if (*s == 0)
	{
		_puts_recursion(char *s - 1);
		_putchar(*s);
	}
	else 
		s + 1;
}
