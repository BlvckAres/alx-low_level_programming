#include "main.h"
/**
 * _memcpy - A function that copies memory area.
 * @dest: A pointer to the memory to copy @src into.
 * @src: The source buffer to copy characters from.
 * @n: The number of bytes to be copied.
 * Return: A pointer to the destination buffer @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		dest[j] = src[j];
	return (dest);
}
