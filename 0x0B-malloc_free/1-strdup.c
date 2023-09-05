#include "main.h"
/**
 * _strdup - a function that returns a pointer to a newly allocated space
 *  in memory, which contains a copy of the string given as a parameter
 *  @str: the input string
 *  Return: 0 if 'str = NULL or insufficient memory was available' or a pointer
 *  to a new string which is a duplicate of the string str
 */
char *_strdup(char *str)
{
	char *p = malloc(sizeof(char) * (strlen(str) + 1));

	if (str == 0 || p == 0)
		return (0);
	int index;

	for (index = 0; index < strlen(str) + 1; index++)
	{
		p[index] = str[index];
	}
	return (p);
}
