#include "main.h"
/**
 * main - multipl of 2 positive numbers
 * @argc: size of array of args
 * @argv: input array of args
 * Return: 0
 */
int main(int argc, char **argv)
{
	int multp, n1, n2;
	char *s1, *s2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[1][0] == '-' || argv[1][0] == '-')
	{
		printf("Error\n");
		exit(98);
	}
	s1 = argv[1];
	s2 = argv[2];
	while (*s1 != '\0')
	{
		if (*s1 < '0' || *s1 > '9')
		{
			printf("Error\n");
			exit(98);
		}
		s1++;
	}
	while (*s2 != '\0')
	{
		if (*s2 < '0' || *s2 > '9')
		{
			printf("Error\n");
			exit(98);
		}
		s2++;
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	multp = n1 * n2;
	printf("%d\n", multp);
	return (0);
}
