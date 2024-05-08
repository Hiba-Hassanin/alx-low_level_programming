#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list of integers
 *              using the Jump search algorithm
 * @list: Pointer to the head of the list to search in
 * @size: Number of nodes in list
 * @value: Value to search for
 *
 * Return: Pointer to the first node where value is located
 *         If value is not present or list is NULL, return NULL
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *current, *prev;
	size_t jump, i;

	if (list == NULL || size == 0)
		return (NULL);

	jump = sqrt(size);
	current = list;
	prev = NULL;

	while (current && current->n < value)
	{
		prev = current;
		for (i = 0; current->next && i < jump; i++)
			current = current->next;

		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev ? prev->index : 0, current->index);

	for (i = prev ? prev->index : 0; i <= current->index && i < size; i++, prev = prev ? prev->next : list)
	{
		printf("Value checked at index [%lu] = [%d]\n", i, prev->n);
		if (prev->n == value)
			return (prev);
	}

	return (NULL);
}
