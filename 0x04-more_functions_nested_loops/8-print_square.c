#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line.
 * @size: size of both width and length
 * Return: a square made of '#'
 */
void print_square(int size)
{
	int x, y;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (x = 2; x <= size; x++)
		{
			_putchar('#');
			for (y = 10; y <= size; y++)
			{
				_putchar('#');
			}
			_putchar('\n);
		}
	}
}
