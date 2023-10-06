#include "MAIN_H"
/**
 * read_textfile - function that reads a text file and prints it
 * to the POSIX standard output
 * @filename: the name of the file
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t FD, option;
	char *content;

	if (filename == 0)
		return (0);
	FD = fopen(filename, O_RDONLY);
	if (FD == -1)
		return (0);
	content = malloc(sizeof(char) * letters);
	if (content == 0)
	{
		close(FD);
		free(content);
		return (0);
	}
	option = read(FD, &content[0], letters);
	if (option == -1)
	{
		close(FD);
		free(content);
		return (0);
	}
	option = write(STDOUT_FILENO, content, option);
	if (option == -1)
	{
		close(FD);
		free(content);
		return (0);
	}
	close(FD);
	free(content);
	return (option);
}
