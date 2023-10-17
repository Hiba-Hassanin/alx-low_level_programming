#include "main.h"

/**
 * rev_string - a function that reverses a string
 *
 * @s: our string input
 *
 * Return: Always 0
*/

void rev_string(char *s)
{
	int re = 0;
	int st = 0;
	int end = 0;
	char rest;

	while (s[re] != '\0')
		re++;

	end = re - 1;

	for (st = 0; st < re / 2; st++)
	{
		rest = s[st];
		s[st] = s[end];
		s[end] = rest;

		end--;
	}
}
