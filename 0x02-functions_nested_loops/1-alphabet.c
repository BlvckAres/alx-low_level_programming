#include "main.h"

/**
 * print_alphabet -> prints the alphabet, in lowercase, then a new line.
 */
void print_alphabet(void);
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
}
