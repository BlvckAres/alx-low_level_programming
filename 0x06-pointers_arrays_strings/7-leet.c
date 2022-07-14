#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * @y: input string
 * Return: Always 0 (Success)
 */
char *leet(char *y)
{
	int i, x;
	int find[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int replacer[] = {'4', '3', '0', '7', '1'};

	for (i = 0; y[i] != '\0'; i++)
	{
		for (x = 0; x <= 9; x++)
		{
			if (y[i] == find[x])
			{
				y[i] = replacer[x / 2];
				x = 9;
			}
		}
	}

	return (y);
}
