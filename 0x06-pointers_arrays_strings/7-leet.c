#include "main.h"

/**
 * *leet - a function that encodes a string into 1337
 *
 * @c: variable
 *
 * Return: a string
*/

char *leet(char *c)
{
	char *cp = c;
	char un[] = {'A', 'E', 'O', 'T', 'L'};
	int duo[] = {4, 3, 0, 7, 1};
	unsigned int trois;

	while (*c)
	{
		for (trois = 0; trois < sizeof(un) / sizeof(char); trois++)
		{
			if (*c == un[trois] || *c == un[trois] + 32)
			{
				*c = 48 + duo[trois];
			}
		}
		c++;
	}

	return (cp);
}
