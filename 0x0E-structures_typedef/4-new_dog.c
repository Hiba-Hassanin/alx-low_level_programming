#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * init_dog - contain dog info
 *
 * @name: the dog name
 * @age: the dog age
 * @owner: their owner name
 *
 * Return: void
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	dog_t *new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
	{
		return (NULL);
	}

	new_dog_ptr->name = malloc(strlen(name) + 1);
	new_dog_ptr->owner = malloc(strlen(owner) + 1);

	if (new_dog_ptr->name == NULL || new_dog_ptr->owner == NULL)
	{
		free(new_dog_ptr->name);
		free(new_dog_ptr->owner);
		free(new_dog_ptr);
		return (NULL);
	}

	strcpy(new_dog_ptr->name, name);
	strcpy(new_dog_ptr->owner, owner);

	new_dog_ptr->age = age;

	return (new_dog_ptr);
}
