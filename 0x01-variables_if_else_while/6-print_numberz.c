#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: Print single digit numbers of base 10 starting from 0
 * A new line
 * You are not allowed to use any variable of type char
 * You can only use the putchar function
 * Every other function (printf, puts, etc are prohibited)
 * You can only use putchar twice in your code
 * Result: Always 0 (Success)
 */
int main(void)
{
	int numbers;

	for (numbers = '0'; numbers <= '9'; numbers++)
	{
		putchar(numbers);
	}
	putchar('\n');

	return (0);
}
