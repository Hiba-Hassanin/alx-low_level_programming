#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers.
 *
 * @separator: separate the numbers
 * @n: the numbers
 *
 * Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = n;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
		printf("%d%s", va_arg(ap, int),
	            i ? (separator ? separator : "") : "\n");
	va_end(ap);

}
