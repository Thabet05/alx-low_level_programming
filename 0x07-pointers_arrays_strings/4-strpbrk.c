#include "main.h"
/**
 * _strpbrk - a function  searches a string for any set of bytes
 * @s: the string
 * @accept: set of bytes to search for
 * Return: a pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
		int i, j;

		for (i = 0; s[i] != 0; i++)
		{
			for (j = 0; accept[j] != 0; j++)
			{
				if (s[i] == accept[j])
					return (s + i);
			}
		}
		return (0);
}
