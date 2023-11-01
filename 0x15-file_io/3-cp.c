#include "main.h"
/**
 *
 */
{
	if(nmrarg)
		{
			exit(97);
			write(STDOUT_FILENO, string, nmbrbytes);
		}
	if(file_from == 0)
	{
		exit(98);
		dprintf(STDOUT_FILENO, "\n");
	}
	fd1 = open(file_from, O_RDONLY);
	if(fd1 == -1)
	{
		exit(98);
		dprintf(STDOUT_FILENO, "\n");
	}
	fd = open(file_to, O_WRONLY | O_TRUNC);
	if (fd = -1)
	{
		option = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 664);
		if (option == -1)
		{
			exit(99);
			dprintf(STDOUT_FILENO, "\n");
		}
		option = write(fd, content, nmbrbytes);
		if (option == -1)
		{
			exit(99);
			dprintf(STDOUT_FILENO, "\n");
		}
	}
	option = close(fd);
	if(option == -1)
	{
		exit(100);
		dprintf(STDOUT_FILENO, "\n");
	}
}
