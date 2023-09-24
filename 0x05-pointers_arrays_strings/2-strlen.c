#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 * @s: the input string
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int length = 0;
	int index = 0;

	while (s[index] != 0)
	{
		length++;
		index;
	}
	return (length);
}
