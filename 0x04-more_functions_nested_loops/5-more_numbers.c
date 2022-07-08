#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14.
 * followed by a new line.
 * Return: numbers from 0 to 14
 */
void more_numbers(void)
{
	int j, num;

	for (num = 0; num <= 9; num++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
