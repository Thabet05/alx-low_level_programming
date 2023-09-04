#include "main.h"
/**
 * main - prints _putchar, followed by a new line
 * @c: the input string
 * Return: 0
 */
int main(char c)
{
	char c[]="_putchar";

	int length;

	int i;

	for (length = 0; length < 11; length++)
        {
                length++;
	}
	for (i = 0; i < length; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
