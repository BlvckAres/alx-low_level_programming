#include "main.h"
/**
 * puts2 - function that prints every other character of the a string,
 * starting with the first character, followed by a new line.
 * @str: the input
 * Return: the character
 */
void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
