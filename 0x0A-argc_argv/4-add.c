#include "main.h"
#include <stdlib.h>
/**
 * main - a program that prints the addition of 2 numbers
 * @argc: the size of the array argv
 * @argv: the array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, res, num;

	if (argc == 0)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		if (num < 0)
		{
			printf("Error\n");
			return (1);
		}
		res = 0;
		res += num;
		printf("%d\n", res);
		return (0);
	}
}
