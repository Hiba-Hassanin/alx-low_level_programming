#include "variadic_functions.h"

/**
 * print_all - Prints anything based on the given format.
 * @format: The format string specifying the types of arguments.
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int all = 0;
	char *str;
	char curr_format;

	va_start(args, format);

	while (format && format[all])
	{
		curr_format = format[all];

		switch (curr_format)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				all++;
				continue;
		}

		if (format[all + 1] != '\0')
			printf(", ");

		all++;
	}

	printf("\n");

	va_end(args);
}
