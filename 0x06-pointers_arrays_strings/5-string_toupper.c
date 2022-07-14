#include "main.h"

/**
 * string_toupper - A function that changes lowercase letters to uppercase.
 * @j: The string to be altered.
 * Return: capitalized string.
 */
char *string_toupper(char *j)
{
	int i;

	for (i = 0; j[i] != '\0'; i++)
	{
		if (j[i] >= 'a' && j[i] <= 'z')
			j[i] = j[i] - 32;
	}
	return (j);
}
