#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: Always 0
*/

void more_numbers(void)
{
	int no1, no2, no3;

	for (no2 = 1; no2 <= 10; no2++)
	{
		for (no3 = 0; no3 <= 14; no3++)
		{
			no1 = no3;
			if (no3 > 9)
			{
				_putchar(1 + 48);
				no1 = no3 % 10;
			}
			_putchar(no1 + 48);
		}
		_putchar('\n');
	}
}
