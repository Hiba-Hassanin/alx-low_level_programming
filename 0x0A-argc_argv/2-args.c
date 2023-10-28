#include <stdio.h>

/**
 * main - prints all arguments it receives
 *
 * @argc: int1
 * @argv: list
 *
 * Return: Always 0
*/

int main(int argc, char const *argv[])
{
	int un = 0;

	while (argc--)
	{
		printf("%s\n", argv[un]);
		un++;
	}

	return (0);
}
