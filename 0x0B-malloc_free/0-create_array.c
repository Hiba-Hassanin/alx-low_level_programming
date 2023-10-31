#include "main.h"

/**
 * *create_array - creates an array of chars, and initializes a specific char
 *
 * @size: the size
 * @c: the char
 *
 * Return: a pointer to the array, or NULL if it fails
*/

#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
    if (size == 0)
        return NULL;

    char *array = malloc(sizeof(char) * size);
    if (array == NULL)
        return NULL;

    for (unsigned int i = 0; i < size; i++)
        array[i] = c;

    return array;
}