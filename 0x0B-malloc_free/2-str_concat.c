#include "main.h"
/**
 * str_concat - a function that concatenates two strings
 * @s1: the first string input
 * @s2: the second string input
 * Return: 0 or a pointer
 */
char *str_concat(char *s1, char *s2)
{
	int l1, l2, ind1, ind2;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = 0;
	l2 = 0;
	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;
	l2++;
	p = malloc(sizeof(char) * (l1 + l2));
	if (p == 0)
		return (NULL);
	for (ind1 = 0; ind1 <= l1; ind1++)
		p[ind1] = s1[ind1];
	for (ind2 = 0; ind2 <= l2; ind2++, ind1++)
		p[ind1] = s2[ind2];
	return (p);
}
