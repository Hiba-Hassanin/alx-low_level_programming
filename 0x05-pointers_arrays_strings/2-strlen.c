#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 *
 * @s: our string input
 *
 * Return: Always 0
*/

int _strlen(char *s)
{
	int lenght;

	for (lenght = 0; *s != '\0'; s++)
		++lenght;

	return (lenght);
}
