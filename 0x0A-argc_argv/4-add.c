#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers
 *
 * @argc: var1
 * @argv: var2
 *
 * Return: Always 0
*/

int main(int argc, char *argv[])
{
	int sum = 0;

	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
