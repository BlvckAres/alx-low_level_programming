#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 *Description: 'Print numbers'
 *
 * Result: Always 0 (Success)
 */
int main(void)
{
	int numbers;

	for (numbers = '0'; numbers <= '9'; numbers++)
		putchar(numbers);
	putchar('\n');
	return (1);
}
