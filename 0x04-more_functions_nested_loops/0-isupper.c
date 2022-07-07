#include "main.h"
#include <ctype.h>
/**
 * _isupper -> a function that checks for an uppercase character.
 * @c: the character that has be checked.
 * Return: 1 if a character is uppercase and 0 if otherwise.
 */
int _isupper(int c)
{
	char c;

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
