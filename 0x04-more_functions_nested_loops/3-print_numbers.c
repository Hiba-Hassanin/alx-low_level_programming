#inculde "main.h"

/**
 * print_numbers -  prints the numbers, from 0 to 9
 *
 * Return: Always 0
*/

void print_numbers(void)
{
	int numero = 0;

	do {
		_putchar(numero + 48);
		numero++;
	} while (numero >= 0 && numero <= 9);
	_putchar('\n');
}
