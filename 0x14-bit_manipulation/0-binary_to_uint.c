#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars.
 *
 * Return: converted number, or if there is one or more char in b, that is not
 * 0 or 1, b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int count = 0, multi = 1;
	int temp;

	if (b == '\0')
		return (0);

	for (temp = 0; b[temp];)
		temp++;

	for (temp -= 1; temp >= 0; temp--)
	{
		if (b[temp] != '0' && b[temp] != '1')
			return (0);

		count += (b[temp] - '0') * multi;
		multi *= 2;
	}

	return (count);
}
