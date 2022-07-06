#include <stdio.h>
/**
 * main - Lists all the natural numbers below 1024 (excluded)
 * that are multiples of 3 or 5
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int x3, x5, x;
	int i;

	x3 = 0;
	x5 = 0;
	x = 0;
	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
		{
			x3 = x3 + i;
		}
		else if ((i % 5) == 0)
		{
			x5 = x5 + i;
		}
	}
	x = x3 + x5;
	printf("%lu\n", x);

	return (0);
}
