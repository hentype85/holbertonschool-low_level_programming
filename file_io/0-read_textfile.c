#include "main.h"

/**
 * read_textfile -  returns the actual
 * number of letters it could read and print
 * @filename: name of the file
 * @letters: number of letters
 * Return: number of letters printed. It fails, returns 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedesc;
	ssize_t nread, nwrite;
	char *buffer;

	if (filename == NULL)
		return (0);

	filedesc = open(filename, O_RDONLY);

	if (filedesc == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	nread = read(filedesc, buffer, letters);
	nwrite = write(STDOUT_FILENO, buffer, nread);

	close(filedesc);
	free(buffer);

	return (nwrite);
}
