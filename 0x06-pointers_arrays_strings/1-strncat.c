include "main.h"

/**
 * _strncat - a function that concatenates two string.
 * @dest: The variable to be copied to.
 * @src: The variable to be copied.
 * @n: input of max bytes to be used.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_y = 0;

	while (dest[index++])
		dest_y++;

	for (index = 0; src[index] && x < n; index++)
		dest[dest_y++] = src[index];
	return (dest);
}
