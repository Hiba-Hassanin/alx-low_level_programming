#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers.
 * @separator: The separator string.
 * @n: The number of arguments.
 * ...: The integers to be printed.
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
	{
		printf("%d", va_arg(ap, int));
		if (i && separator)
			printf("%s", separator);
	}
	printf("\n");

	va_end(ap);
}
