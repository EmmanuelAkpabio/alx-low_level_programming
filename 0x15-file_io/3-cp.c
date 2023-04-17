#include "main.h"
int __exit(int error, char *s, int fd);

/**
 * main - entry point for the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Description: the program copies the content of a file to another file
 * usage: cp file_from file_to
 *
 * Return: 0 on success; non-zero on failure
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to, bytes_read, bytes_written;
	char *buffer[1024];

	if (argc != 3)
		__exit(97, NULL, 0);

	/* sets file descriptor for file_to */
	fd_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd_to == -1)
		__exit(99, argv[2], 0);

	/* sets file descriptor for file_from */
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		__exit(98, argv[1], 0);

	/* read and copy contents */

	while ((bytes_read = read(fd_from, buffer, 1024)) != 0)
	{
		if (bytes_read == -1)
			__exit(98, argv[1], 0);

		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
			__exit(99, argv[2], 0);
	}

	/* close each file */
	close(fd_from) == -1 ? (__exit(100, NULL, fd_from)) : close(fd_from);
	close(fd_to) == -1 ? (__exit(100, NULL, fd_to)) : close(fd_to);
	return (0);
}

/**
 * __exit - prints error messages and exits with exit value
 * @error: num is either exit value or file descriptor
 * @s: str is a name, either of the two filenames
 * @fd: file descriptor
 * Return: 0 on success
 **/
int __exit(int error, char *s, int fd)
{
	switch (error)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(error);
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
		exit(error);
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
		exit(error);
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(error);
	default:
		return (0);
	}
}
