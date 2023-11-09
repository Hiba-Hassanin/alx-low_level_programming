#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 *
 * @n: the numbers
 *
 * Return: void
*/

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i = n;
	va_list args;

	if (!n)
		return (0);

	va_start(args, n);
	while (i--)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
