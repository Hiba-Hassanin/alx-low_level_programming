#include "search_algos.h"

/**
 * min - Returns the minimum of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Minimum of a and b
 */
int min(int a, int b)
{
	return (a < b ? a : b);
}

/**
 * binary_search - Searches for a value in a sorted array using Binary search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found or array is NULL
 */
int binary_search(int *array, int low, int high, int value)
{
	while (low <= high)
	{
		int mid = low + (high - low) / 2;

		printf("Searching in array: ");
		for (int i = low; i <= high; i++)
		{
			if (i != low)
				printf(", ");
			printf("%d", array[i]);
		}
		printf("\n");

		if (array[mid] == value)
			return mid;
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return -1;
}

/**
 * exponential_search - Searches for a value in a sorted array using Exponential search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found or array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return -1;

	int bound = 1;
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%d] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	int low = bound / 2;
	int high = min(bound, size - 1);
	printf("Value found between indexes [%d] and [%d]\n", low, high);

	return binary_search(array, low, high, value);
}
