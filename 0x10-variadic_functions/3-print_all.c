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
	unsigned int i = 0;
	char *str;
	char curr_format;

	va_start(args, format);

	while (format[i] != '\0')
	{
		curr_format = format[i];

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
				i++;
				continue;
		}

		if (format[i + 1] != '\0' && (curr_format == 'c' || curr_format == 'i' || curr_format == 'f' || curr_format == 's'))
			printf(", ");

		i++;
	}

	printf("\n");

	va_end(args);
}
