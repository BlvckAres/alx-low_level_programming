#include "holberton.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The set of bytes to be searched for.
 *
 * Return: If a set is matched - a pointer to the matched byte.
 *         If no set is matched - NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int j, n;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[j] == accept[n])
				return (s + j);
		}
	}

	return (NULL);
}
