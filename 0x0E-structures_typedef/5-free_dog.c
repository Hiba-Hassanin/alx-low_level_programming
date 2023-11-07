#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs
 *
 * @d: the dog  info
 *
 * Return: void
*/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
