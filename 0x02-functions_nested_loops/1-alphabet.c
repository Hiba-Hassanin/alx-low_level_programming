#include"main.h"

/**
 *print_alphabet - use the _putchar function to print the letters from a to z
*/

void print_alphabet(void)
{
	int alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		_putchar(alph);
	_putchar('\n');
}
