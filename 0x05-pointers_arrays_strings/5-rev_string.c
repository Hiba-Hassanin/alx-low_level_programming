#include "main.h"

/**
 * rev_string - a function that reverses a string
 *
 * @s: our string input
 *
 * Return: Always 0
*/

void rev_string(char *)
{
	int length = strlen(s);
	int i, j;
	char temp;

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
