#include "main.h"
#include <string.h>

/**
 * *str_concat - a function that concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL on failure
*/

char *str_concat(char *s1, char *s2)
{
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	int len1 = strlen(s1);
	int len2 = strlen(s2);

	char *concatenated = malloc((len1 + len2 + 1) * sizeof(char));
	if (concatenated == NULL)
		return NULL;

	strcpy(concatenated, s1);
	strcat(concatenated, s2);

	return concatenated;
}