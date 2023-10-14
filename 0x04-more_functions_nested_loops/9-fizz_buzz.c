#include "main.h"

/**
 * main - prints the numbers from 1 to 100
 *        for multiples of three print Fizz
 *        for the multiples of five print Buzz
 *        for multiples of three and five print FizzBuz
 *
 * Return: Always 0
*/

int main(void)
{
	int no;

	for (no = 1; no <= 100; no++)
	{
		if (no % 3 == 0 && !(no % 5 == 0))
			printf("Fizz");
		else if (no % 5 == 0 && !(no % 3 == 0))
			printf("Buzz");
		else if (no % 3 == 0 && no % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", no);

		if (no != 100)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}
