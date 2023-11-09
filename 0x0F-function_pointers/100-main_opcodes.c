#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - prints the opcodes of its own main function
 *
 * @start: var1
 * @num_bytes: var2
 *
 * Return: void
*/

void print_opcodes(char *start, int num_bytes)
{
	int i;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%.2hhx", start[i]);
		if (i < num_bytes - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - entry point
 *
 * @argc: first
 * @argv: second
 *
 * Return: void
*/


int main(int argc, char *argv[])
{
	int num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes((char *)&main, num_bytes);

	return (0);
}
