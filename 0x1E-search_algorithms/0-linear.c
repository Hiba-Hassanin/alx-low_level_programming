#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array
 * of integers using linear search algorithm
 *
 * @array: Pointer to the first element
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The first index where value is located,
 * or -1 if value is not present or if NULL
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int index;

	for (index = 0; array && index < size; index++)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
		{
			return (index);
		}
	}
	return (-1);
}
