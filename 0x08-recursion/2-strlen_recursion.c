#include "main.h"
/**
 *_strlen_recursion - a function that returns the length of a string
 * @s: the input string
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int l = 0;

		if (*s > '\0')
		{
			l += 1 + _strlen_recursion(s + 1);
		}
		return (l);
}
