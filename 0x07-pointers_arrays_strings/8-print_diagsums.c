#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 *
 * @a: variable
 * @size: the size
 *
 * Return: Always 0
*/

void print_diagsums(int *a, int size)
{
	int pro1, pro2, t;

	pro1 = 0;
	pro2 = 0;

	for (t = 0; t < size; t++)
	{
		pro1 = pro1 + a[t * size + t];
	}
	for (t = size - 1; t >= 0; t--)
	{
		pro2 += a[t * size + (size - t - 1)];
	}
	printf("%d, %d\n", pro1, pro2);
}
