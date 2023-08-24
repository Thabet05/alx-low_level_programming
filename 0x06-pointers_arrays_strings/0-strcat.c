#include "main.h"
/**
 * _stract - a function that concatenates two strings
 * @src: input value
 * @dest: input value
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i;

	int j=0;

	int longue=0;

	while (*dest != '\0')
	{
		longue++;
		*dest++;
	}
	while (*src != '\0')
	{
		siz++;
		*src++;
	}
	i=longue+1;
	while (i<siz+longue+1)
	{
		dest[i]=src[j];
		i++;
		j++;
	}
	dese[i] = '\0';
	return(dest);
}
