#include "main.h"
#include <string.h>

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
	void *output;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);

	output = malloc(new_size);
	if (output == NULL)
		return (NULL);

	memcpy(output, ptr, (old_size < new_size) ? old_size : new_size);
	free(ptr);

	return (output);
}
