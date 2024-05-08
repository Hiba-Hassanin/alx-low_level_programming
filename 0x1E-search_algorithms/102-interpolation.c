#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array using
 *                        Interpolation search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found or array is NULL
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low, mid, high;

	low = 0;
	high = (int) size - 1;

	if (!array || size == 0)
		return (-1);
	while (array[low] != array[high] && value >= array[low] &&
		   value <= array[high])
	{
		mid = low + (((double) (high - low) / (array[high] - array[low])) *
					 (value - array[low]));

		printf("Value checked array[%ld] = [%d]\n", mid, array[mid]);
		if (value > array[mid])
			low = mid + 1;
		else if (value < array[mid])
			high = mid - 1;
		else
			return (mid);
	}
	mid = low + (((double) (high - low) / (array[high] - array[low])) *
				 (value - array[low]));
	printf("Value checked array[%ld] is out of range\n", mid);
	return (-1);
}
