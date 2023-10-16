#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: print that character
 *
 * Return: if successful return 1, if an error is found return -1
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
