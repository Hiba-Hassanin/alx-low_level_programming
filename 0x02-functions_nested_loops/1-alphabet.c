#include"main.h"

/**
 * main - check the code
 *
 * Description: print_alphabet prints the alphabet(a to z), in lowercas
 *
 * Return:  Always 0
*/

void print_alphabet(void)
{
	int alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		_putchar(alph);
	_putchar('\n');
}
