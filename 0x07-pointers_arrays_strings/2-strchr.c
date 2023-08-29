#include "main.h"
/**
 *  _strchr -  a function that locates a character in a string
 *  @s: the string
 *  @c: the character
 *  Return: pointer to the first occurrence of the character c in the string s
 */
char *_strchr(char *s, char c)
{
		int j;

		j = 0;
		while (s[j] >= 0)
		{
			if (s[j] == c)
				return (s + j);
			j++;
		}
					return (0);
}
