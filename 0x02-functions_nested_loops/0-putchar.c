#include "main.h"

/**
 * main - entry point
 *
 * Description: a program that prints _putchar
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char str[] = "_putchar";
	int ola;

	for (ola = 0; ola < 8; ola++)
		_putchar(str[ola]);
	_putchar('\n');

	return (0);
}
