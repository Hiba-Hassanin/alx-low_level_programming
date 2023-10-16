#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 *
 * @a: our first input
 * @b: second input
 *
 * Return: alawys 0
*/

void swap_int(int *a, int *b)
{
	int duo;

	duo = *a;
	*a = *b;
	*b = duo;
}
