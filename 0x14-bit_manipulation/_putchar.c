#include "main.h"

/**
 * _putchar - Writes a character to the standard output.
 * @c: The character to be written.
 *
 * Return: the character written.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
