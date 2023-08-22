#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse
 * followed by a new line.
 * @s:tring to print in revese
 */
void print_rev(char *s)
{
	int i = 0;

	while(*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	int o;

	for(o=i;o>0;o--)
	{
		putchar(*s);
	}
	putchar('\n');
}
