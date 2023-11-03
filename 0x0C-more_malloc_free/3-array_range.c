#include "main.h"

/**
 * *array_range - creates an array of integers
 *
 * @min: minimum
 * @max: maximum
 *
 * Return: the pointer to the newly created array
*/

int *array_range(int min, int max)
{
	int *theAr;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	theAr = malloc(size * sizeof(int));
	if (theAr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		theAr[i] = min;
		min++;
	}

	return (theAr);
}
