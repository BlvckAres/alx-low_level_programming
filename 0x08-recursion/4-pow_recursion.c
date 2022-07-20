#include "main.h"
/**
 * _pow_recursion - A function that returns the value of x raised to the power
 * of y.
 * @x: The number to be raised.
 * @y: The exponent.
 * Return: The result of the @x to the power of y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
