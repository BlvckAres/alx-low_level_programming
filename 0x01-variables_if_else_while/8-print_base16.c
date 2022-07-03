#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Write a programme that prints all the numbers of base 16 in lowercase.
 * Followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numb;
	char alpha;

	for (numb = '0'; numb <= '9'; numb++)
	{
		putchar(numb);
	}
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
