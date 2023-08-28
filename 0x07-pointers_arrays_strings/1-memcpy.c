#include "main.h"
/**
 * _memcpy - copies memory area
 * @src: src string
 * @dest: dest string
 * @n: size o src
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
		unsigned int j;

			for (j = 0; j < n; j++)
			{
				dest[j] = src[j];
			}

			return (dest);
}
