#include "main.h"

/**
 * *_strstr - a function that locates a substring
 *
 * @haystack: variable
 * @needle: variable
 *
 * Return: a pointer to the beginning of the located substring
*/

char *_strstr(char *haystack, char *needle)
{
	int na;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		na = 0;

		if (haystack[na] == needle[na])
		{
			do {
				if (needle[na + 1] == '\0')
					return (haystack);

				na++;

			} while (haystack[na] == needle[na]);
		}
		haystack++;
	}

	return ('\0');
}
