#include "main.h"

/**
 * times_table - prints the 9 times table
*/

void times_table(void)
{
	int nu, vec, igu;

	for (nu = 0; nu <= 9; nu++)
	{
		_putchar(48);
		for (vec = 1; vec <= 9; vec++)
		{
			_putchar(',');
			_putchar(' ');

			igu = nu * vec;

			if (igu <= 9)
				_putchar(' ');
			else
				_putchar((igu / 10) + 48);

			_putchar((igu % 10) + 48);
		}
		_putchar('\n');
	}
}
