#include"main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
*/

void print_alphabet_x10(void)
{
	int diez, ch;

	for (diez = 0; diez <= 9; diez++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
