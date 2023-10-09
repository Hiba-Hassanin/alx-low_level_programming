#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all possible different combinations of two digits
 *
 * Return: 0 (success)
*/

int main(void)
{
	int numero_uno = 0, numero_due;

	while (numero_uno <= 9)
	{
		numero_due = 0;
		while (numero_due <= 9)
		{
			if (numero_uno != numero_due && numero_uno < numero_due)
			{
				putchar(numero_uno + 48);
				putchar(numero_due + 48);
				if (numero_uno + numero_due != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			numero_due++;
		}
		numero_uno++;
	}
	putchar('\n');

	return (0);
}
