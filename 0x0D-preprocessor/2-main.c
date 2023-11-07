#include <stdio.h>

/**
 * main - t prints the name of the file it was compiled from.
 *
 * Return: Always 0
*/

int main(void)
{
	printf("Compiled from: %s\n", __FILE__);
	return (0);
}
