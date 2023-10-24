#include "main.h"

/**
 * *_memcpy - a function that copies memory area
 *
 * @dest: memory
 * @src: resource
 * @n: variable
 *
 * Return: a pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int ga;

	for (ga = 0; ga < n; ga++)
	{
		dest[ga] = src[ga];
	}
	return (dest);
}
