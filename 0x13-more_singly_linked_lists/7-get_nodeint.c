#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t
 * @head: Pointer to the head of the list
 * @index: Index of the node to retrieve (starting from 0)
 *
 * Return: Pointer to the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int calc = 0;

	while (current != NULL)
	{
		if (calc == index)
			return (current);

		calc++;
		current = current->next;
	}

	return (NULL);
}
