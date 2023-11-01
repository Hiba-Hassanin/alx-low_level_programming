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
#include <stdlib.h>
#include <string.h>

char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
		return (NULL);

	int i;
	int len;
	int total_len = ac;
	char *str;
	char *result;

	for (i = 0; i < ac; i++)
		total_len += strlen(av[i]);

	str = (char *)malloc(total_len + 1);
	if (str == NULL)
		return (NULL);

	result = str;
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
