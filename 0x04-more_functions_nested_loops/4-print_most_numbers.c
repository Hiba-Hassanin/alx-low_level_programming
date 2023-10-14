#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 *                       rotten 2 & 4
 *
 * Return: Always 0
*/

void print_most_numbers(void)
{
	int numero;

	for (numero = 0; numero <= 9; numero++)
	{
		if (numero == 2 || numero == 4)
			continue;
		_putchar(numero + 48);
	}
	_putchar('\n');
}
