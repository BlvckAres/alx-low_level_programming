#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: The array to be reversed
 * @n: The number of elements.
 * Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n; i++)
	{
		n--;
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
