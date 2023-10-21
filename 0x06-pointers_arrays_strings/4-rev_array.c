#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 *
 * @a: first variable
 * @n: second variable
 *
 * Return: always zero
*/

void reverse_array(int *a, int n)
{
	int u, d, t;

	for (u = 0, d = (n - 1); u < d; u++, d--)
	{
		t = a[u];
		a[u] = a[d];
		a[d] = t;
	}
}
