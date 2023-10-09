#include <stdio.h>

/**
 * main - entry point
 *
 * Description: a program that prints all the numbers of base 16 in lowercase
 *
 * Return: 0 (success)
*/

int main(void)
{
	int integer = 48; /*ASCII , 48 = 0*/

	while (integer <= 102) /*102 here represent char 'f'*/
	{
		putchar(integer);

		/* we gonna go from 57 = 9 to 97 = a by adding 39 +1*/
		if (integer == 57)
			integer += 39;
		integer++;
	}
	putchar('\n');

	return (0);
}
