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

	token_t tokens[] = {
			{"c", print_char},
			{"i", print_int},
			{"f", print_float},
			{"s", print_string},
			{NULL, NULL}
	};

	va_start(args, format);

	while (format && format[i])
	{
		unsigned int j = 0;

		while (tokens[j].token)
		{
			if (*tokens[j].token == format[i])
			{
				tokens[j].f(args);
				if (format[i + 1])
					printf(", ");
				break;
			}
			j++;
		}

		i++;
	}

	va_end(args);

	printf("\n");
}

/**
 * print_char - Prints a character.
 * @args: The va_list containing the character argument.
 *
 * Return: void
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - Prints an integer.
 * @args: The va_list containing the integer argument.
 *
 * Return: void
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - Prints a float.
 * @args: The va_list containing the float argument.
 *
 * Return: void
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - Prints a string.
 * @args: The va_list containing the string argument.
 *
 * Return: void
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(nil)";

	printf("%s", str);
}
