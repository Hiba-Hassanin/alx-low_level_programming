#include "variadic_functions.h"

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The separator string.
 * @n: The number of strings.
 * ...: The strings to be printed.
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	const char *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, const char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(ap);
}
