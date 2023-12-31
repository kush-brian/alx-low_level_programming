#include "main.h"
/**
 * append_text_to_file - appends text
 * @filename: the file
 * @text_content: file content
 * Return: the appended text
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		if (write(fd, text_content, strlen(text_content)) == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
