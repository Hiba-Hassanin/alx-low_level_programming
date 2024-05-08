#include "search_algos.h"

/**
 * recursive_binary_search - Recursively searches
 * for a value in a sorted array
 *
 * @arr: Pointer to 1st element of array to search in
 * @left: Index of the leftmost element of subarray
 * @right: Index of the rightmost element of subarray
 * @val: Value to search for
 *
 * Return: Index where value is located,
 * or -1 if not found
 */

int recursive_binary_search(int *arr, int left, int right, int val)
{
	int mid;

	while (left <= right)
	{
		mid = left + (right - left) / 2;
		print_array(arr, left, right);

		if (arr[mid] == val)
			return mid;
		else if (arr[mid] < val)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return -1;
}

/**
 * print_array - Prints the subarray being searched
 *
 * @arr: Pointer to the 1st element of array to print
 * @start: Index of the start of the subarray
 * @end: Index of the end of the subarray
 *
 * Return: void
 */

void print_array(int *arr, int start, int end)
{
	int i;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", arr[i]);
		if (i < end)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - Searches for a value
 * in a sorted array using binary search
 *
 * @array: Pointer to 1st element array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where value is located,
 * or -1 if not found or array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return -1;

	return recursive_binary_search(array,0,(int)size - 1, value);
}
