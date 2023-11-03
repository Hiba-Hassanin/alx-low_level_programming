#include "main.h"
#include <string.h>

/**
 * *string_nconcat - a function that concatenates two strings.
 *
 * @s1: first string
 * @s2: second string
 * @n: input
 *
 * Return: If fails return NULL
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = 0, s2_len = 0;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	if (n >= s2_len)
		n = s2_len;

	result = malloc(s1_len + n + 1);
	if (result == NULL)
		return (NULL);

	memcpy(result, s1, s1_len);
	memcpy(result + s1_len, s2, n);
	result[s1_len + n] = '\0';

	return (result);
}
