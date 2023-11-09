#include "variadic_functions.h"

/**
 * print_char - Prints a character.
 * @ap: The va_list containing the character argument.
 * @separtor: the separator
 *
 * Return: void
 */
void print_char(char *separtor, va_list ap)
{
	printf("%s%c", separtor, va_arg(ap, int));
}

/**
 * print_int - Prints an integer.
 * @ap: The va_list containing the integer argument.
 * @separtor: the separator
 *
 * Return: void
 */
void print_int(char *separtor, va_list ap)
{
	printf("%s%d", separtor, va_arg(ap, int));
}

/**
 * print_float - Prints a float.
 * @ap: The va_list containing the float argument.
 * @separtor: the separator
 * Return: void
 */
void print_float(char *separtor, va_list ap)
{
	printf("%s%f", separtor, va_arg(ap, double));
}

/**
 * print_string - Prints a string.
 * @ap: The va_list containing the string argument.
 * @separtor: the separator
 *
 * Return: void
 */
void print_string(char *separtor, va_list ap)
{
	char *str = va_arg(ap, char *);

	switch ((int)(!str))
		case 1:
			str = "(nil)";

	printf("%s%s", separtor, str);
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
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
