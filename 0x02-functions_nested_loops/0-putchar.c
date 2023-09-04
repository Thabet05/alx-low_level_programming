#include "main.h"
/**
 * main - entry point
 * prints _putchar, followed by a new line
 * Return: 0
 */
int main(void)
{
	char c[] = "_putchar";

	int length;

	for (length = 0; length < 8; length++)
	{
		_putchar(c[length]);
	}
	_putchar('\n');
	return (0);
}
