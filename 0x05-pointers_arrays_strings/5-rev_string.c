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
	int length = 0;
	int start = 0;
	int end = 0;
	char temp;

	while (s[length] != '\0')
		length++;

	end = length - 1;

	for (start = 0; start < length / 2; start++)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		end--;
	}
}
