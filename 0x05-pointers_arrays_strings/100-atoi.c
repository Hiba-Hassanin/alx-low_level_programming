#include "main.h"

/**
 * _atoi - a function that convert a string to an integer
 *
 * @s: our input
 *
 * Return: Always 0
*/

int _atoi(char *s)
{
	unsigned int sn = 0;
	int stnu = 1;

	do {
		if (*s == '-')
			stnu *= -1;
		else if (*s >= '0' && *s <= '9')
			sn = (sn * 10) + (*s - '0');
		else if (sn > 0)
			break;

	} while (*s++);

	return (sn * stnu);
}
