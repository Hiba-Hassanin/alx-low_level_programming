#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 *
 * @s: variable
 * @accept: variable 2
 *
 * Return: the number of bytes in the initial segment of s
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int na = 0;
	int dia;

	while (*s)
	{
		for (dia = 0; accept[dia]; dia++)
		{
			if (*s == accept[dia])
			{
				na++;
				break;
			}
			else if (accept[dia + 1] == '\0')
				return (na);
		}
		s++
	}
	return (na);
}
