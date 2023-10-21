#include "main.h"

/**
 * _strncpy - a function that copies a string.
 *
 * @dest: first pointer
 * @src: second pointer
 * @n: variable
 *
 * Return: @dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int uno;

	for (uno = 0; uno < n && src[uno] != '\0'; uno++)
		dest[uno] = src[uno];
	while (uno < n)
	{
		dest[uno] = '\0';
		uno++;
	}

	return (dest);
}
