#include "main.h"

/**
 * *_strncat - a function that concatenates two stringsin the script
 *
 * @dest: uno pointer
 * @src: dos pointer
 * @n: number of bytes from src
 *
 * Return: @dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int c, duo;

	c = 0;

	while (dest[c])
		c++;

	for (duo = 0; duo < n && src[duo] != '\0'; duo++)
		dest[c + duo] = src[duo];
	dest[c + duo] = '\0';

	return (dest);
}
