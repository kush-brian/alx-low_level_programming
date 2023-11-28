#include "main.h"
/**
 * main - copies content of a file to another
 * @argc: the arg count
 * @argv: the arg vector
 * Return: 0 when success
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];
	int i = 0;

	/* check if ryt amount of args is probably*/
	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to\n");

	/* open the source file */
	fd_from = open(argv[i], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		error_exit(99, "Error: Can't write to file %s\n", argv[2]);
	}
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			close(fd_from);
			close(fd_to);
			error_exit(99, "Error: Can't write to file %s\n", argv[2]);
		}
	}
	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);
	}
	if (close(fd_from) == -1)
		error_exit(100, "Error: Can't close fd %d\n", fd_from);
	if (close(fd_to) == -1)
		error_exit(100, "Error: Can't close fd %d\n", fd_to);
	return (0);
}

/**
 * error_exit - executes error
 * @code: the code
 * @message: the message
 */
void error_exit(int code, const char *message, ...)
{
	va_list args;

	va_start(args, message);
	dprintf(2, message, args);
	va_end(args);
	exit(code);
}
