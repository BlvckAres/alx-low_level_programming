#include "main.h"

/**
 * _strncpy - A function that copies a string.
 * @dest: The variable storing the string copy.
 * @src: The source string.
 * @n: The maximum number of bytes to be copied from src.
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		if (i < n)
			dest[i] = src[i];
		while (i < n)
			dest[i++] = '\0';
	return (dest);
}
