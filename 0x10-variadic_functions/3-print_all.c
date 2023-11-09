#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - Prints a character.
 * @separator: The separator string.
 * @ap: The va_list containing the character argument.
 *
 * Return: void
 */
void print_char(char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}

/**
 * print_int - Prints an integer.
 * @separator: The separator string.
 * @ap: The va_list containing the integer argument.
 *
 * Return: void
 */
void print_int(char *separator, va_list ap)
{
	printf("%s%d", separator, va_arg(ap, int));
}

/**
 * print_float - Prints a float.
 * @separator: The separator string.
 * @ap: The va_list containing the float argument.
 *
 * Return: void
 */
void print_float(char *separator, va_list ap)
{
	printf("%s%f", separator, va_arg(ap, double));
}

/**
 * print_string - Prints a string.
 * @separator: The separator string.
 * @ap: The va_list containing the string argument.
 *
 * Return: void
 */
void print_string(char *separator, va_list ap)
{
	char *str = va_arg(ap, char *);

	switch ((int)(!str))
	{
		case 1:
			str = "(nil)";
	}

	printf("%s%s", separator, str);
}

/**
 * print_all - Prints anything based on the given format.
 * @format: The format string specifying the types of arguments.
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0, j;
	char *separator = "";
	char *str;

	token_t tokens[] = {
			{"c", print_char},
			{"i", print_int},
			{"f", print_float},
			{"s", print_string},
			{NULL, NULL}
	};

	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;

		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(separator, ap);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
