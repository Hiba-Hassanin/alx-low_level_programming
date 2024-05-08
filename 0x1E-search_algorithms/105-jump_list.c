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
	size_t jump_step, current_index, prev_index;
	listint_t *prev_node;

	if (list == NULL || size == 0)
		return (NULL);

	jump_step = (size_t)sqrt((double)size);
	current_index = 0;
	prev_index = 0;

	do {
		prev_node = list;
		prev_index++;
		current_index = prev_index * jump_step;

		while (list->next && list->index < current_index)
			list = list->next;

		if (list->next == NULL && current_index != list->index)
			current_index = list->index;

		printf("Value checked at index [%d] = [%d]\n", (int)current_index, list->n);

	} while (current_index < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)prev_node->index, (int)list->index);

	for (; prev_node && prev_node->index <= list->index; prev_node = prev_node->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)prev_node->index, prev_node->n);
		if (prev_node->n == value)
			return (prev_node);
	}

	return (NULL);
}
