#include "main.h"

/**
 * GetError - check if the file can open
 * @fileFrom: parameter
 * @fileTo: parameter
 * @argv: arguments vector
 */
void ErrorFromTo(int fileFrom, int fileTo, char *argv[])
{
	if (fileFrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can´t read from file %s\n", argv[1]);
		exit(98);
	}
	if (fileTo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can´t write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - main function
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: always (0)
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, errorCloseFrom, errorCloseTo;
	int numChar = 1024, numWr;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	ErrorFromTo(file_from, file_to, argv);

	while (numChar == 1024)
	{
		numChar = read(file_from, buffer, 1024);
		if (numChar == -1)
			ErrorFromTo(-1, 0, argv);

		numWr = write(file_to, buffer, numChar);
		if (numWr == -1)
			ErrorFromTo(0, -1, argv);
	}

	errorCloseFrom = close(file_from);
	errorCloseTo = close(file_to);
	
	if (errorCloseFrom == -1 || errorCloseTo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can´t close %d\n", file_from);
		exit(100);
	}

	return (0);
}
