#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 *
 * @n: our input
 * @a: our string input
 *
 * Return: Always 0
*/

void print_array(int *a, int n)
{
	int ar;

	for (ar = 0; ar < n; ar++)
	{
		if (ar != (n - 1))
			printf("%d, ", a[ar]);
		else
			printf("%d", a[ar]);
	}
	printf("\n");
}
