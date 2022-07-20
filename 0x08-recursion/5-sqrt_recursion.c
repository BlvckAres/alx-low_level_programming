#include "main.h"
int sqroot(int n, int i);

/**
 * _sqrt_recursion - function that returns the natural square roots of a digit
 * @n: The of which its natural squares will be returned.
 * Return: If n does not have a natural square root, the function returns -1
 * If n has a natural square root - the natural sq root @n should be returned.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (sqroot(n, (n + 1) / 2));
}
/**
 * sqroot - checks if potentially perfect squares.
 * @n: input
 * @i: counter
 * Return: if square root
 */
int sqroot(int n, int i)
{
	if (i < 1)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (sqroot(n, i - 1));
}
