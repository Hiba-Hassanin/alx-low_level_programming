#include "main.h"
#include <ctype.h>

/**
 * main - that multiplies two positive numbers
 *
 * @argc: integer
 * @argv: the list
 *
 * Return: 0
*/

int validate_input(char *num) {
	while (*num) {
		if (!isdigit(*num))
			return 0;
		num++;
	}
	return 1;
}

int main(int argc, char *argv[]) {
	if (argc != 3) {
		printf("Error\n");
		return 98;
	}

	char *num1 = argv[1];
	char *num2 = argv[2];

	if (!validate_input(num1) || !validate_input(num2)) {
		printf("Error\n");
		return 98;
	}

	unsigned long long int result = strtoull(argv[1], NULL, 10) * strtoull(argv[2], NULL, 10);
	printf("%llu\n", result);

	return 0;
}