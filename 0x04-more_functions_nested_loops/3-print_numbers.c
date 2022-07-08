#include "main.h"

/**
 * print_numbers - a function that prints the numbers, from 0 to 9
 * and a new line
 *
 * Return: 0-9 followed by a new line
 */
void print_numbers(void)
{
	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
