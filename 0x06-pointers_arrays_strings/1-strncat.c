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
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
	{
	}
	for (y = 0; y < n; y++)
	{
		dest[x + y] = src[y];
		if (src[y] == '\0')
			y = n;
	}

	return (dest);
}
