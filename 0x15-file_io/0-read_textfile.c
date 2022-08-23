#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to stdout.
 * @filename: a pointer to the name of the file to be read.
 * @letters: number of letters the function should read and print.
 *
 * Return: number of letters printed.
 * otherwise: if the function fails or filename is NULL - 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t op, rd, wt;

	if (filename == NULL)
		return (0);
	op = open(filename, O_RDONLY);
	if (op < 0)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	rd = read(op, buffer, letters);
	if (rd < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[rd] = '\0';
	close(op);
	wt = write(STDOUT_FILENO, buffer, rd);
	if (wt < 0)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return (wt);
}

