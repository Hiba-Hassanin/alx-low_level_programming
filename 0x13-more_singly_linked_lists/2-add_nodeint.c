#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @n: Value to be assigned to the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_one;

	new_one = malloc(sizeof(listint_t));
	if (new_one == NULL)
		return (NULL);

	new_one->n = n;
	new_one->next = *head;
	*head = new_one;

	return (new_one);
}
