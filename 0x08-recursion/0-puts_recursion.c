#include "main.h"
/**
 * _puts_recursion - A function that prints a string, followed by a new line.
 * @s: The string to be printed.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\0');
	else
	{
		_putchar(*s);
		_putchar_recurison(s + 1);
	}
}
