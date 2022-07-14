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
	int x = 0, dest_y = 0;

	while (dest[x++])
		dest_y++;

	for (x = 0; src[x] && x < n; x++)
		dest[dest_y++] = src[x];
	return (dest);
}
