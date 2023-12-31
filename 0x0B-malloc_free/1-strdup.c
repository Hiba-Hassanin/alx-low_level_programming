#include "main.h"
#include <string.h>

/**
 * *_strdup - returns a pointer to a newly allocated space
 *
 * @str: input
 *
 * Return: NULL if str = NULL
*/

char *_strdup(char *str)
{
	char *duplicate;
    size_t length;

    if (str == NULL)
        return (NULL);

    length = strlen(str);
    duplicate = malloc((length + 1) * sizeof(char));

    if (duplicate == NULL)
        return (NULL);

    strcpy(duplicate, str);

    return (duplicate);
}
