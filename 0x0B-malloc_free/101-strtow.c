#include "main.h"
#include <string.h>
/**
 * **strtow - splits a string into words
 * @str: the string
 * Return: NULL if str == NULL or str == ""
*/
char **strtow(char *str)
{
	int i, j, count = 0;
	char **words;

	if (!str || !*str)
		return (NULL);

	for (i = 0; str[i]; i++)
		count += (str[i] != ' ' && (i == 0 || str[i - 1] == ' '));

	if (count == 0)
		return (NULL);

	words = malloc((count + 1) * sizeof(char *));
	if (!words)
		return (NULL);

	for (i = 0, j = 0; str[j]; j++)
	{
		if (str[j] != ' ' && (j == 0 || str[j - 1] == ' '))
		{
			int len = strcspn(&str[j], " ");
			words[i] = malloc((len + 1) * sizeof(char));
			strncpy(words[i++], &str[j], len);
			j += len - 1;
		}
	}

	words[count] = NULL;
	return (words);
}
