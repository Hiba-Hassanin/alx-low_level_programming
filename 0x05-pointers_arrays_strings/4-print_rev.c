#include "main.h"

/**
 * print_rev - rints a string, in reverse
 *
 * @s: our string input
 *
 * Return: Always 0
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		putchar(s[i]);
	}
	_putchar('\n');
}
