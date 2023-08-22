#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse
 * followed by a new line.
 * @s:tring to print in revese
 */
void print_rev(char *s)
{
	while(*s == '\0')
	{
		s--;
		putchar(*s);
	}
	putchar('\n');
}
