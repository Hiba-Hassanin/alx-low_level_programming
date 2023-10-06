#include <unistd.h>

/**
 * main -Entry point
 *
 * Description: a C program that prints a string
 *      without using either puts nor printf and return 1
 *
 * Return: 1 (fail.)
*/

int main(void)
{
	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, quo, 59);
	return (1);
}
