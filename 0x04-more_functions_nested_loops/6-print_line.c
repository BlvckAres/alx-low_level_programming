#include "main.h"

/**
 * print_line - draws a straight line using the character _.
 * @n: The number of _ character to be printed.
 * Return: the line for the n value
 */
void print_line(int n)
{
	int len;

	if (n <=  0)
	{
		_putchar('\n');
	}
	else
	{
		for (len = 1; len <= n; len++)
		{
			putchar('_');
		}
		_putchar('\n');
	}
}
