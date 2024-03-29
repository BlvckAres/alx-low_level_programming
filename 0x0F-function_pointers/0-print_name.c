#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * @name: The name to be printed.
 * @f: A pointer to a function that prints a name.
 *
 * Return: no return.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	f(name);

}
