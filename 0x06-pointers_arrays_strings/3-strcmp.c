#include "main.h"

/**
 * _strcmp - A function that compares two strings.
 * @s1: First input
 * @s2: Second input
 * Return: dest
 */
int_strcmp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;

	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	j = s1[i] - s2[i];
	return (j);
}
