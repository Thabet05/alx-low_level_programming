#include "main.h"
/**
 * - program that prints the name of the file
 * it was compiled from, followed by a new line
 * Return: 0
 */
int main(void)
{
	char* filename = __FILE__;

	for (int i = 0; filename[i] != '\0'; i++)
	{
		_putchar(filename[i]);
	}
	_putchar('\n');
	return 0;
}
