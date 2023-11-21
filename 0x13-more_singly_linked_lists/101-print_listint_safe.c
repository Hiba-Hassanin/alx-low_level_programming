#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head, *loop_node = NULL;
	size_t count = 0;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		if (current >= current->next)
		{
			loop_node = current->next;
			printf("-> [%p] %d\n", (void *)loop_node, loop_node->n);
			break;
		}

		current = current->next;
	}

	if (loop_node != NULL)
	{
		current = head;
		while (current != loop_node)
		{
			printf("[%p] %d\n", (void *)current, current->n);
			count++;
			current = current->next;
		}
	}

	return (count);
}
