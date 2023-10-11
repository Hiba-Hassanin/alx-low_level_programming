#include "main.h"

/**
 * print_sign -  prints the sign of a number, if n is 0 return & print 0
 *               if n > 0 return 1 & print +
 *               if n < 0 return -1 & print -
 *
 * @n: uses integer data type for the function
 *
 * Return:0 if 0, 1 if +, and -1 if -
*/

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
