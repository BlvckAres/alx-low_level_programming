#include "main.h"
/**
 * _strlen_recursion - A function that prints the length of the string.
 * @s: The string length to be printed.
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
