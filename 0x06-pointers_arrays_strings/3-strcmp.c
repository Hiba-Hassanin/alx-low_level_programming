#include "main.h"

/**
 * _strcmp - Write a function that compares two strings
 *
 * @s1: first string
 * @s2: second string
 * Return: 1 if right, else 0
*/

int _strcmp(char *s1, char *s2)
{
	int numero = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			numero = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (numero);
}
