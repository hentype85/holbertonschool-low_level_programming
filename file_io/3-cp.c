#include "main.h"
#define size 1024

/**
 * ErrorOpen - check if the file can open
 * @file_from: parameter
 * @file_to: parameter
 * @argv: arguments vector
 */
void ErrorOpen(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can´t read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
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
	int file_from = 0, file_to = 0;
	int numChar = size, numWr = 0;
	char buffer[size];

	/*check vector*/
	if (argc != 3)
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to"), exit(97);

	/*open file*/
	file_from = open(argv[1], O_RDONLY);/*open*/
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);/*open*/
	ErrorOpen(file_from, file_to, argv);

	/*copy file*/
	while (numChar == size)
	{
		numChar = read(file_from, buffer, size);/*read*/
		numWr = write(file_to, buffer, numChar);/*write*/
		ErrorOpen(numChar, numWr, argv);
	}

	/*Close files*/
	if (close(file_to) == -1 || close(file_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can´t close file %d\n", -1), exit(100);

	return (0);
}
