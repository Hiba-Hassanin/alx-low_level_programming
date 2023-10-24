#include "main.h"

/**
 * *_strchr - a function that locates a character in a string
 *
 * @s: varaible 1
 * @c: varaible 2
 *
 * Return: a pointer to the first occurrence of the character c
*/

char *_strchr(char *s, char c)
{
	int la = 0;

	for (; s[la] >= '\0'; la++)
	{
		if (s[la] == c)
			return (&s[la]);
	}
	return (0);
}
