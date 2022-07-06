#include "main.h"
/**
 * print_sign - This function prints the sign of a number.
 * @n: The number of which the sign will be printed.
 * Return: 1 and prints + if number is greater than zero,
 * 0 if number equals zero,
 * -1 if the number is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

