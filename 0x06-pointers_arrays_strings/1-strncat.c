#include "main.h"

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
	int j, i;

	j = 0;

	for (i = 0; i < 1000; i++)
	{
		if (dest[i] == '\0')
		{
			break;
		}
		j++;
	}
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';
	return (dest);
}
