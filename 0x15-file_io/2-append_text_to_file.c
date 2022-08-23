#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: a pointer to the name of the file to append text to.
 * @text_content: the string to add to at the end of the file.
 *
 * Return: if the function fails or filename is NULL - -1.
 * if the file does not exist the user lacks write permissions - -1.
 * otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wt, cout = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (cout = 0; text_content[cout];)
			cout++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wt = write(op, text_content, cout);

	if (op == -1 || wt == -1)
		return (-1);

	close(op);

	return (1);
}
