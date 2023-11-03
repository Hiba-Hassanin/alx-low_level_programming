#include "main.h"

/**
 * *malloc_checked -  a function that allocates memory using malloc
 *
 * @b: input
 *
 * Return: a pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	int *yu = malloc(b);

	if (yu == 0)
		exit(98);

	return (yu);
}
