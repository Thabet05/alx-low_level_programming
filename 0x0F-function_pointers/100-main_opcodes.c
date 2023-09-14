#include "function_pointers.h"
/**
 * main - prints Opcodes
 * @args: number of args
 * @argv: array of args
 * Return: Allways 0 (Success)
 */
int main(int args, char **argv)
{
	int x, y;
	unsigned char *q;

	q = (unsigned char *)main;
	if (args != 2)
		printf("Error\n"), exit(1);
	y = atoi(argv[1]);
	if (y < 0)printf("Error\n"), exit(2);
	for (x = 0; x < y; x++)
	{
		if (x != y - 1)
			printf("%02hhx ", *q);
		else 
			printf("%02hhx", *q);
		q++;
	}
	printf("\n");
	return (0);
}
