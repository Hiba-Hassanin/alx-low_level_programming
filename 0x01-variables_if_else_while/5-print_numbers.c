#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0 (success)
*/

int main(void)
{
	int sdigit = 0;

	while (sdigit <= 9)
	{
		printf("%i", sdigit);
		sdigit++;
	}
	printf("\n");

	return (0);
}
