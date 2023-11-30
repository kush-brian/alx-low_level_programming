#include "main.h"

/**
 * main - The entry point
 * @argc: the arg count
 * @argv: arg vector
 * Return: 0 when success
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage:cp file_from file_to\n");
		exit(97);
	}
	copy_file(argv[1], argv[2]);
	exit(0);
}

/**
 * copy_file - a function that copies file
 * @src: the source file
 * @dest: the destination
 * Return: exit with output code
 */

void copy_file(const char *src, const char *dest)
{
	int fd1, fd2, just_read;
	char buff[1024];

	fd1 = open(src, O_RDONLY);
	if (!src || fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	fd2 = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while ((just_read = read(fd1, buff, 1024)) > 0)
	{
		if (write(fd2, buff, just_read) != just_read || fd2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			exit(99);
		}
	}
	if (just_read == -1)
	{
		dprintf(STDERR_FILENO, "Error:Can't read from file %s\n", src);
		exit(98);
	}

	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error:Can't close fd %d\n", fd1);
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error:Can't close fd %d\n", fd2);
		exit(100);
	}
}
