#include "main.h"
#include <string.h>

/**
 * *argstostr - concatenates all the arguments of your program
 *
 * @ac: arg1
 * @av: arg2
 *
 * Return: NULL if ac == 0 or av == NULL
*/

char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
		return (NULL);

	int i, len, total_len = ac;
	for (i = 0; i < ac; i++)
		total_len += strlen(av[i]);

	char *str = (char *)malloc(total_len + 1);
	if (str == NULL)
		return (NULL);

	char *result = str;
	for (i = 0; i < ac; i++)
	{
		len = strlen(av[i]);
		strcpy(str, av[i]);
		str += len;
		*str++ = '\n';
	}
	*str = '\0';

	return (result);
}
