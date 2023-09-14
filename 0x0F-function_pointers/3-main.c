#include "3-calc.h"
#include "function_pointers.h"
/**
 * main - function that performs simple operations
 * @argc: number of args
 * @argv: array of args
 * Return: Allways 0 (Success)
 */
int main(int argc, char *argv[])
{
	int (*op_f)(int, int), x, y;

	if (argc != 4)
		printf("Error\n"), exit(98);
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	op_f = get_op_func(argv[2]);
	if (op_f == 0)
		printf("Error\n"), exit(99);
	if (y == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
		printf("Error\n"), exit(100);
	printf("%d\n", op_f(x, y));
	return (0);
}
