#include "main.h"

/**
 * get_endianness - checks the endianness.
 *
 * Return: if big-endian - 0.
 * if little-endian - 1.
 */
int get_endianness(void)
{
	int count = 1;
	char *ness = (char *)&count;

	if (*ness == 1)
		return (1);

	return (0);
}
