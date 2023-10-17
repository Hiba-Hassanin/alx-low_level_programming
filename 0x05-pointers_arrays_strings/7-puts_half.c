#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: the string input
 *
 * Return: Always 0
*/

void puts_half(char *str)
{
	int hf;

	for (hf = 0; str[hf] != '\0'; hf++)
		;

	hf++;
	for (hf /= 2; str[hf] != '\0'; hf++)
	{
		putchar(str[hf]);
	}
	putchar('\n');
}
