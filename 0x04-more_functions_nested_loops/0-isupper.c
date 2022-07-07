#include "main.h"
#include <stdio.h>
/**
 * _supper -> a function that checks for an uppercase character.
 * @c: the character that has be checked.
 * Return: 1 if a character is uppercase and 0 if otherwise.
 */
int _supper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
