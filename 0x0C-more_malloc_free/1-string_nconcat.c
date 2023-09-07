#include "main.h"
/**
 * string_nconcat - function that concatenates two strings
 * @s1: the first input string
 * @s2: the second input string
 * @n: the first n bytes of s2
 * Retuen: pointer or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char s3[];
	int i;

	for (i = 0; i < 
