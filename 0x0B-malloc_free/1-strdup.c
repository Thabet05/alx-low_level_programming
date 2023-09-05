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
	int j;
	char *p = malloc((sizeof(char) * j) + 1);
	int index;

	j = 0;
	if (str == 0 || p == 0)
		return (0);
	while (str[j] != 0)
		j++;
	for (index = 0; index < j; index++)
	{
		p[index] = str[index];
	}
	return (p);
}
