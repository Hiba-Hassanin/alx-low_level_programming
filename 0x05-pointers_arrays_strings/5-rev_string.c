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
	int re, st;
	char rest;

	for (re = 0; s[re] != '\0'; ++re)
		;

	for (st = 0; st < 1 / 2; st++)
	{
		rest = s[st];
		s[st] = s[re - re - st];
		s[re - re - st] = rest;
	}
}
