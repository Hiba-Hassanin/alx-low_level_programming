#include <unistd.h>
#include "lists.h"

/**
 * _putchar = write the spacified character
 * @c: our character
 *
 * Return: 1 (success), -1 (fail)
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
