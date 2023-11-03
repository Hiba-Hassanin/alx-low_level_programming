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

void multiply(char *num1, char *num2) {
	int len1 = 0, len2 = 0, i, j;
	int *result;

	while (num1[len1])
		len1++;
	while (num2[len2])
		len2++;

	result = calloc(len1 + len2, sizeof(int));

	for (i = len1 - 1; i >= 0; i--) {
		for (j = len2 - 1; j >= 0; j--) {
			int digit1 = num1[i] - '0';
			int digit2 = num2[j] - '0';
			int temp = digit1 * digit2 + result[i + j + 1];

			result[i + j] += temp / 10;
			result[i + j + 1] = temp % 10;
		}
	}

	i = 0;
	while (result[i] == 0 && i < len1 + len2 - 1)
		i++;

	for (; i < len1 + len2; i++)
		printf("%d", result[i]);

	printf("\n");

	free(result);
}

int main(int argc, char *argv[]) {
	if (argc != 3) {
		printf("Error\n");
		return 98;
	}

	if (!validate_input(argv[1]) || !validate_input(argv[2])) {
		printf("Error\n");
		return 98;
	}

	multiply(argv[1], argv[2]);

	return 0;
}
