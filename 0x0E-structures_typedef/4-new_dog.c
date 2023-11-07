#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _lenS - show the string length
 *
 * @str: the string
 *
 * Return: the string length
*/

int _lenS(const char *str)
{
	int sLen = 0;

	while (*str++)
		sLen++;
	return (sLen);
}

/**
 * _copy - this function copy our string
 *
 * @src: first
 * @dest: second
 *
 * Return: @dest
*/

char *_copy(char *dest, char *src)
{
	int co;

	for (co = 0; src[co]; co++)
		dest[co] = src[co];
	dest[co] = '\0';

	return (dest);

}

/**
 * init_dog - contain dog info
 *
 * @name: the dog name
 * @age: the dog age
 * @owner: their owner name
 *
 * Return: void
*/

dog_t *new_dog(char *name, float age, char *owner) {
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_lenS(name) + 1));
	if ((*dog).name == NULL) {
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_lenS(owner) + 1));
	if ((*dog).owner == NULL) {
		free(dog->owner);
		free(dog);
		return (NULL);
	}

	dog->name = _copy(dog->name, name);
	dog->age = age;
	dog->owner = _copy(dog->owner, owner);

	return (dog);
}
