#include "main.h"
/**
 * _print_rev_recursion - A function that prints a string in reverse.
 * @s: The string to be printed in reverse.
 * Return: Always 0 (Success)
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		_print_rev_recursion(s + 1);
	else
		return;
	_putchar(*s);
}
