#include <stdio.h>

/**
 * main -  prints the number of arguments passed into it
 *
 * @argc: var1
 * @argv: var2
 *
 * Return: Always 0
*/

int main(int argc, char argv[] _attribute_((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
