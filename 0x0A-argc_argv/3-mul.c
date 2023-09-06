#include "main.h"
/**
 * main - a program that prints the multiplication of 2 numbers
 * @argc: the size of the array argv
 * @argv: the array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	int num1, num2, res;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	res = num1 * num2;
	printf("%d\n", res);
	return (0);
}
