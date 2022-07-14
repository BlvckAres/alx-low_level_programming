#include "main.h"

/**
 * cap_string - A function that capitalizes all words of a string.
 * @x: The input string.
 * Return: The stirng in uppercase.
 */
char *cap_string(char *x)
{
	int i, j;
	int cap = 32;
	int separators[] = {',', ';', '.', '!', '?', '"'
		'(', ')', '{', '}', ' ', '\n', '\t'};

	for (i = 0; x[i] != '\0'; i++)
	{
		if (x[i] >= 'a' && x[i] <= 'z')
		{
			x[i] = x[i] - cap;
		}
		cap = 0;
		for (j = 0; j <= 12; j++)
		{
			if (x[i] == separators[j])
			{
				j = 32;
				cap = 32;
			}
		}
	}
	return (x);
}
