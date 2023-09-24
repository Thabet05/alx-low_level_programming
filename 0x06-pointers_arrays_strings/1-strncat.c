#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 * @src: input value
 * @dest: input value
 * @n: tne number of bytes
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
        int i;

        int j;

        i = 0;
        while (dest[i] != '\0')
        {
                i++;
        }
        j = 0;
        while (j < n)
        {
                dest[i] = src[j];
                i++;
                j++;
        }
	if (j == n)
		dest[i] = '\0';
        return (dest);
}
