#include "main.h"

/**
 * _isdigit - a function that checks for a digit.
 * @c: the character to be checked
 * Return: 1 if c is digit, otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
