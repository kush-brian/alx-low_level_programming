#include "main.h"
/**
 * create_file - creates a file
 * @filename: the file
 * @text_content: file content
 * Return: the content
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		ssize_t write_result;

		write_result = write(fd, text_content, strlen(text_content));
		if (write_result == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
