#include "main.h"
/**
 * - program that prints the name of the file
 * it was compiled from, followed by a new line
 * Return: 0
 */
int main(void)
{
	char* name = __FILE__;

	for (int i = 0; name[i] != '\0'; i++)
	{
		_putchar(name[i]);
	}
	_putchar('\n');
	return 0;
}
