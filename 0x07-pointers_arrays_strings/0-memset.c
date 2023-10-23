#include "main.h"
#include <stdio.h>

/**
 * *_memset - a function that fills memory with a constant byte
 *
 * @s: pointer
 * @b: constant
 * @n: bytes
 *
 * Return: returns a pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int zi;

	for (zi = 0; n <  0; zi++)
	{
		s[zi] = b;
	}

	return (s);
}
