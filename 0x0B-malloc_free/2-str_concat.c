#include "main.h"

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
	int l1 = 0;
	int l2 = 0;
	char *conc;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[l1])
		l1++;
	while (s2[l2])
		l2++;

	conc = malloc(l1 + l2 + 1);
	if (conc == NULL)
		return NULL;

	int i;
	for (i = 0; i < l1; i++)
		conc[i] = s1[i];

	int j;
	for (j = 0; j < l2; j++)
		conc[l1 + j] = s2[j];

	conc[l1 + l2] = '\0';

	return (conc);
}