#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array
 * of integers using binary search algorithm
 *
 * @array: Pointer to the first element of array to search
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The index where value is located,
 * or -1 if value is not present or if array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid, i;

	if (array == NULL)
		return -1;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
			else
				printf("\n");
		}

		mid = (left + right) / 2;

		if (array[mid] == value)
			return mid;
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return -1; // If the value not found
}
