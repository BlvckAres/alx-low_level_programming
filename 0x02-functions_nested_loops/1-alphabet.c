#include "main.h"
/**
 * print_alphabet - Entry Point
 * Write a function that prints the alphabet, in lowercase, then a new line.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void);
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{	
		putchar(letter);
	}
		
	putchar('\n');
}
