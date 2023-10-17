#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - a program that generates random valid passwords
 *
 * Return: Always 0
*/

int main(void)
{
	int pro;
	char p;

	srand(time(NULL));
	while (pro <= 2645)
	{
		p = rand() % 128;
		pro += p;
		putchar(p);
	}
	putchar(2772 - pro);
	return (0);
}
