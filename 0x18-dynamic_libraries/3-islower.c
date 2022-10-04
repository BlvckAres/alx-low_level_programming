#include "main.h"
/**
 * _islower - this function checks for lowercase characters
 * @j: The charater to be checked.
 * Return: 1 if character is lowercase, 0 if otherwise
 */
int _islower(int j)
{
	if (j >= 'a' && j <= 'z')
		return (1);
	else
		return (0);
}
