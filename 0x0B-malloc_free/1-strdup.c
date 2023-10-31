#include "main.h"

/**
 * *_strdup - returns a pointer to a newly allocated space
 *
 * @str: input
 *
 * Return: NULL if str = NULL
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *_strdup(char *str)
{
    if (str == NULL)
        return (NULL);

    size_t length = strlen(str);

    char *duplicate = malloc((length + 1) * sizeof(char));
    if (duplicate == NULL)
        return (NULL);

    strcpy(duplicate, str);

    return (duplicate);
}