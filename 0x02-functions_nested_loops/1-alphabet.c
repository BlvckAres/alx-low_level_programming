#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - Prints the alphabets in lowercase then a new line.
 * Return: void
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');
}
