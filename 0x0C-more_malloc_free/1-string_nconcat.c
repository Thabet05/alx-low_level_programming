#include "main.h"
/**
 * string_nconcat - function that concatenates two strings
 * @s1: the first input string
 * @s2: the second input string
 * @n: the first n bytes of s2
 * Retuen: pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	int i, j, l1, l2;

	if (s1 == 0)
		;
	for (l2 = 0; s2[l2] != '\0'; l2++)
		;
	if (n >= l2)
		n = l2;
	s = malloc(siezeof(char) * (l1 + n + 1));
	if (s == 0)
		return (0);
	for (i = 0; s1[i] != 0; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; s2[j] < n; j++)
	{
		s[i] = s2[j];
		i++;
	}
	s[i] = 0;
	return (s);
}
