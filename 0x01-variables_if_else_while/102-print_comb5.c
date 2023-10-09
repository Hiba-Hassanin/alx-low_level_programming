#include <stdio.h>

/**
 * main - entry point
 *
 * Description:  prints all possible combinations of two two-digit numbers
 *
 * Return: 0 (success)
*/

int main(void)
{
	int uno = 0, dos;

	while (uno <= 99)
	{
		dos = uno;
		while (dos <= 99)
		{
			if (dos != uno)
			{
				putchar((uno / 10) + 48);
				putchar((uno % 10) + 48);
				putchar(' ');
				putchar((dos / 10) + 48);
				putchar((dos % 10) + 48);

				if (uno != 98 || dos != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			dos++;
		}
		uno++;
	}
	putchar('\n');

	return (0);
}
