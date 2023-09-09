#include "main.h"
#include <stdlib>
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
	unsigned int i = 0, j = 0, l1 = 0, l2 = 0;

	for (l1 = 0; s1[l1] != '\0'; l1++)
		;
	for (l2 = 0; s2[l2] != '\0'; l2++)
		;
	if (n < l2)
		s = malloc(siezeof(char) * (l1 + n + 1));
	else
		s = malloc(siezeof(char) * (l1 + l2 + 1));
	if (!s)
		return (NULL);
	for (i = 0; s1[i] != 0; i++)
		s[i] = s1[i];
	while (n < l2 && i < (l1 + n))
		s[i++] = s2[j++];
	while (n < l2 && i < (l1 + l2))
		s[i++] = s2[j++];
	s[i] = '\0';
	return (s);
}
