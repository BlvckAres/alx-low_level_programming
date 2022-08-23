#include "main.h"

/**
 * create_file - create a file.
 * @filename: a pointer to the  name of the file to create.
 * @text_content: text to write in the file.
 *
 * Return: Success return 1 or -1 on Failure.
 */
int create_file(const char *filename, char *text_content)
{
	int op, wt, cout = 0;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		for (cout = 0; text_content[cout];)
			cout++;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wt = write(op, text_content, cout);

	if (op == -1 || wt == -1)
		return (-1);

	close(op);

	return (1);
}
