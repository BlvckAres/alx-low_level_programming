#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: a pointer to a string of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 * otherwise - the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int digit = 0, multi = 1;
	int count;

	if (b == '\0')
		return (0);

	for (count = 0; b[count];)
		count++;

	for (count -= 1; count >= 0; count--)
	{
		if (b[count] != '0' && b[count] != '1')
			return (0);

		digit += (b[count] - '0') * multi;
		multi *= 2;
	}

	return (digit);
}
