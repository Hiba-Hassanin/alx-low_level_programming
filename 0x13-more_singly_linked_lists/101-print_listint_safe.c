#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *quick;
	size_t calc = 0;

	slow = head;
	quick = head;

	while (slow != NULL && quick != NULL && quick->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		calc++;
		slow = slow->next;
		quick = quick->next->next;

		if (slow == quick)
		{
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			exit(98);
		}
	}

	if (slow != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		calc++;
	}

	return (calc);
}
