#include "main.h"

/**
 * *string_toupper - function that change lowercase letters to uppercase
 *
 * @str: our string
 *
 * Return: a string
*/

char *string_toupper(char *str)
{
	int u;

	for (u = 0; str[u] != '\0'; u++)
	{
		if (str[u] >= 97 && str[u] <= 122)
		{
			str[u] = str[u] - 32;
		}
	}
	return (str);
}
