#include "main.h"

/**
 * _puts - prints a string, to stdout
 *
 * @str: the string
 *
 * Return: Always 0
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0)
		str++;
	}
	_putchar('\n');
}
