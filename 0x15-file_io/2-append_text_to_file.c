#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the string to add at the end of the file
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t option;

	option = open(filename, O_RDONLY);
	if (option != -1)
	{
		option = open(filename, O_WRONLY | O_APPEND);
		if (option == -1)
		{
			close(option);
			return (-1);
		}
		if (!text_content)
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
	return (-1);
}
