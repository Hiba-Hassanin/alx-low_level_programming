#include "main.h"

/**
 * print_square - prints a square using #
 *
 * @size: our input to the sequare
 *
 * Return: Always 0
*/

void print_square(int size)
{
	int w, h;

	for (w = 1; w <= size; w++)
	{
		for (h = 1; h <= size; h++)
			_putchar('#');
		_putchar('\n');
	}
}
