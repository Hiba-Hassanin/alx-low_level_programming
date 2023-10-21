#include "main.h"
#include <stdio.h>

/**
 * lowerCase - detect lowercase letters
 *
 * @c: variable
 *
 * Return: 1 (success), else 0 (fail)
*/

int lowerCase(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * ifDelimiter - detect if we have a delimiter
 *
 * @c: variable
 *
 * Return: 1 (success), else 0 (fail)
*/

int ifDelimiter(char c)
{
	int un;
	char deli[] = " \t\n,.!?\"(){}";

	for (un = 0; un < 12; un++)
		if (c == deli[un])
			return (1);
	return (0);
}

/**
 * *cap_string - a function that capitalizes all words of a string
 *
 * @s: our variable
 *
 * Return: it return a capital string
*/

char *cap_string(char *s)
{
	char *ptr = s;
	int uno = 1;

	while (*s)
	{
		if (ifDelimiter(*s))
			uno = 1;
		else if (lowerCase(*s) && uno)
		{
			*s -= 32;
			uno = 0;
		}
		else
			uno = 0;
		s++;
	}
	return (ptr);
}
