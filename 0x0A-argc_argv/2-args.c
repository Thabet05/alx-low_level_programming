#include "main.h"
/**
 * main - a program that prints arguments
 * @argc: the size of the array argv
 * @argv: the array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num;

	for (num = 0; num < argc; num++)
	{
		printf("argv[%d] = %s\n", num, argv[num]);
	}
	return (0);
}
