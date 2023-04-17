#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: pointer to the file
 * @text_content: pointer to string to be appended
 *
 * Return: 1 on success; -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, bytes;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	/* get the length of text_content */
	len = 0;
	while (text_content[len] != '\0')
		len++;

	bytes = write(fd, text_content, len);
	if (bytes == -1 || bytes != len)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
