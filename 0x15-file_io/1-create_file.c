#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: the name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t option = 0;

	if (filename == 0)
		return (-1);
	option = open(filename, O_WRONLY | O_TRUNC, 0600);
	if (option == -1)
	{
		option = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
		if (option == -1)
		{
			return (-1);
		}
		if (text_content == 0)
		{
			close(option);
			return (1);
		}
		option = write(option, text_content, strlen(text_content));
		if (option == -1)
		{
			close(option);
			return (-1);
		}
		close(option);
		return (1);
}
