#include "main.h"
/**
 * main - a program that prints the multiplication of 2 numbers
 * @argc: the size of the array argv
 * @argv: the array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	if (argc != 3)
	{
		printf("error\n");
		return (1);
	}
	printf("%d\n", num1 * num2);
	return (0);
}
