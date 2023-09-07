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
	char *s3;
	int i, j, l1;

	for (l1 ==0; s1 != 0; l1++)
		;
	s3 = malloc(siezeof(char) * (l1 + n + 1));
	if s3 == 0
		return (0);
	for (i = 0; s1[i] != '\0'; i++)
	{
		s3[i] = s1[i];
	}
	for (j = 0; s2[j] < n; j++, i++)
	{
		s3[i] = s2[j];
	}
	i++;
	s3[i] = '\0';
	return (s3);
}	
