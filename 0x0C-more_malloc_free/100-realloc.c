#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 *
 * @ptr: var
 * @old_size: our old size
 * @new_size: the new one
 *
 * Return: Nothing
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int ne;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}
	if (new_size > old_size)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		for (ne = 0; ne < old_size && ne < new_size; ne++)
			*((char*)new_ptr + ne) = *((char*)ptr + ne);
		free(ptr);
	}
	return (new_ptr);
}
