#include "main.h"
/**
 * main - a function that copies the content of a file to another file
 * @argc: number of arguments
 * @argv: the argument
 * Return: 0
 */
int main (int argc, char **argv)
{
	ssize_t file_from, file_to, option,fd, fd1;

	if(argc != 3)
		{
			exit(97);
			dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		}
	if(argv[1] == 0)
	{
		exit(98);
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", argv[1]);
	}
	fd1 = open(file_from, O_RDONLY);
	if(fd1 == -1)
	{
		exit(98);
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", argv[1]);
	}
	fd = open(file_to, O_WRONLY | O_TRUNC);
	if (fd = -1)
	{
		option = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 664);
		if (option == -1)
		{
			exit(99);
			dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", argv[2]);
		}
		option = write(fd, content, nmbrbytes);
		if (option == -1)
		{
			exit(99);
			dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", argv[2]);
		}
	}
	option = close(fd);
	if(option == -1)
	{
		exit(100);
		dprintf(STDOUT_FILENO, "rror: Can't close fd\n");
	}
}
