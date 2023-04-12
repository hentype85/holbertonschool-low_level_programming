#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: text in the file
 * Return: 1 if it success. -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	wr = write(fd, text_content, len);

	if (wr == -1 || fd == -1)
		return (-1);

	close(fd);

	return (1);
}
