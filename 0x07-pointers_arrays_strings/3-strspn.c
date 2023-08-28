#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: the string
 * @accept: the set of characters
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
		int i, j, l;

		unsigned int k;

		i = 0;
		j = 0;
		k = 0;
		l = 0;
		for (i = 0; s[i] != 0; i++)
		{
			l = 0;
			for (j = 0; accept[j] != 0; j++)
			{
				if (accept[j] == s[i])
					l = 1;
				break;
			}
		}
		if (l == 0)
			return (k);
		k++;
		return (k);
}
