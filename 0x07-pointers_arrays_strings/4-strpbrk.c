#include "main.h"

/**
 * *_strpbrk - a function that searches a string for any of a set of bytes
 *
 * @s: variable 1
 * @accept: varable 2
 *
 * Return: a pointer to the byte in s
*/

char *_strpbrk(char *s, char *accept)
{
	int na;

	while (*s)
	{
		for (na = 0; accept[na]; na++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}
	return ('\0');
}
