#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Returns the sum of all its numbers.
 * @n: the number of parameters passed to the function.
 * @...: a variable number of parameters to calculate the sum of.
 *
 * Return: If n == 0, return 0
 * otherwise, the sum of all parmeters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list digits;
	unsigned int i, sum = 0;

	va_start(digits, n);

	for (i = 0; i < n; i++)
		sum += va_arg(digits, int);

	va_end(digits);

	return (sum);
}
