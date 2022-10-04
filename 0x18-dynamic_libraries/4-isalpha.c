#include "main.h"
/**
 * _isalpha - This function checks for upper and lowercase characters.
 * @c: The character to be checked
 * Return: 1 if character uppercase or lowercase, 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
