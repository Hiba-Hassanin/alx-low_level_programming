#include "main.h"

/**
 * _abs - print the absolute value of an integer
 *
 * @n: the integer type for the function
 *
 * Return: Always 0 (success)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
