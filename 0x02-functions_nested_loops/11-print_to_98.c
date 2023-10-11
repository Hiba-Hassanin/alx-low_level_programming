#include "main.h"

/**
 * print_to_98 -  prints all natural numbers from n to 98
 *
 * @n: our input
*/

void print_to_98(int n)
{
	int numeros;

	if (n > 98)
		for (numeros = n; numeros > 98; numeros--)
			printf("%d, ", numeros);
	else
		for (numeros = n; numeros < 98; numeros++)
			printf("%d, ", numeros);
	printf("98\n");
}
