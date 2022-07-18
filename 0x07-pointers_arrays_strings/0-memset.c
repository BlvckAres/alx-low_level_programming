#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: A pointer the memory area to be filled.
 * @b: constant byte.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		s[j] = b;
	return (s);
}
