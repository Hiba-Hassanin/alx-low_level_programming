#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 *
 * @dest: our first string
 * @src: second string
 *
 * Return: the pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int se = -1;

	do {
		se++;
		dest[se] = src[se];
	} while (src[se] != '\0');

	return (dest);
}
