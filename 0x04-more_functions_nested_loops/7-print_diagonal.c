#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: the number of the \ character
*/

void print_diagonal(int n)
{
	int dia, mov;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (dia = 1; dia <= n; dia++)
		{
			for (mov = 1; mov <= dia; mov++)
				_putchar(' ');
			_putchar(92); /* 92 = '/'*/
			_putchar('\n');
		}
	}
}
