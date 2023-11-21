#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list.
 * @h: Pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *temp;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (count);

	current = *h;
	while (current != NULL)
	{
		if (current <= current->next)
		{
			temp = current->next;
			free(current);
			count++;
			break;
		}

		temp = current->next;
		free(current);
		count++;
		current = temp;
	}

	*h = NULL;

	return (count);
}
