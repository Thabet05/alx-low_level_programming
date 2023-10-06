#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: the name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
        ssize_t FD, option;
        char *content;

        if (filename == 0)
                return (0);
        FD = open(filename, O_RDONLY);
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
