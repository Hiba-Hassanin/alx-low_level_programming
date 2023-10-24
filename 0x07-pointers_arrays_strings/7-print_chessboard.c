#include "main.h"

/**
 * print_chessboard -  a function that prints the chessboard
 *
 * @a: array
 *
 * Return: Always 0
*/

void print_chessboard(char (*a)[8])
{
	int n;
	int l;

	for (n = 0; n < 8; n++)
	{
		for (l = 0; l < 8; l++)
			_putchar(a[n][l]);
		_putchar('\n');
	}
}
