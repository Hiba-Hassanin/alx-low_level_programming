#include "main.h"

/**
 * puts2 - prints every other character of string starting with first character
 *
 * @str: our string input
 *
 * Return: Always 0
*/

void puts2(char *str)
{
	int fi;

	for (fi = 0; str[fi] != '\0'; ++fi)
	{
		if (fi % 2 == 0)
			putchar(st[fi]);
	}
	putchar('\n');
}
