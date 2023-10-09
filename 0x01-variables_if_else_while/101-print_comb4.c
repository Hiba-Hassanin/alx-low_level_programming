#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all possible different combinations of three digits
 *
 * Return: o (success)
*/

int main(void)
{
	int uno = 0;
	int dos, tres;

	while (uno <= 9)
	{
		dos = 0;
		while (dos <= 9)
		{
			tres = 0;
			while (tres <= 9)
			{
				if (uno != dos &&
				    uno < dos &&
				    dos != tres &&
				    dos < tres)
				{
					putchar(uno + 48);
					putchar(dos + 48);
					putchar(tres + 48);

					if (uno + dos + tres != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				tres++;
			}
			dos++;
		}
		uno++;
	}
	putchar('\n');

	return (0);
}
