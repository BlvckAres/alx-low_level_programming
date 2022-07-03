#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Write a programme that prints possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numb;

	for (numb = 0; numb < 90; numb++)
	{
		putchar((numb / 10) + '0');
		putchar((numb % 10) + '0');
	}
	if (numb != 89)
	{
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
