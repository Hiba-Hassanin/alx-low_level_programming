#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The address of the node
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *quick;

	if (head == NULL || head->next == NULL)
		return (NULL);

	slow = head->next;
	quick = (head->next)->next;

	while (quick && quick->next)
	{
		if (slow == quick)
		{
			slow = head;
			while (slow != quick)
			{
				slow = quick->next;
				quick = quick->next;
			}
			return (slow);
		}
		slow = slow->next;
		quick = (quick->next)->next;
	}

	return (NULL);
}
