#include "main.h"
/**
 * main - a function that copies the content of a file to another file
 * @argc: number of arguments
 * @argv: the argument
 * Return: 0
 */
int main (int argc, char **argv)
{
	ssize_t option, fd, fd1;
	char *buffer;

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
	fd1 = open(argv[1], O_RDONLY);
	if(fd1 == -1)
	{
		exit(98);
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", argv[1]);
	}
	fd = open(argv[2], O_WRONLY | O_TRUNC);
	if (fd == -1)
	{
		fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 664);
		if (fd == -1)
		{
			exit(99);
			dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", argv[2]);
		}
		buffer = malloc(sizeof(char) * 1024);
		if (buffer == 0)
		{
			exit(99);
			dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", argv[2]);
		}
		option = write(fd, buffer, fd1);
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
		dprintf(STDOUT_FILENO, "Error: Can't close %zd\n", fd);
	}
}
