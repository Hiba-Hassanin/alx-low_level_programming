#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer.
 *
 * Return: The converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int output = 0;
	unsigned int bin;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		bin = b[i] - '0';
		output = (output * 2) + bin;
	}

	return (output);
}
