#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array using Jump search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found or array is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return -1;

	int step = sqrt(size);
	int prev = 0;

	printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	while (array[min(step, (int)size) - 1] < value)
	{
		prev = step;
		step += sqrt(size);
		if (prev >= (int)size)
			return -1;
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	}

	printf("Value found between indexes [%d] and [%d]\n", prev, step);
	while (array[prev] < value)
	{
		if (prev >= min(step, (int)size))
			return -1;
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev++;
	}

	if (array[prev] == value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		return prev;
	}

	return -1;
}
