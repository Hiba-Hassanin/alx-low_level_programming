#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 *
 * @dest: first pointer
 * @src: second pointer
 *
 * Return: a pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	int c, duo;

	c = 0;
	while (dest[c])
		c++;

	for (duo = 0; src[duo]; duo++)
		dest[c++] = src[duo];

	return (dest);
}
