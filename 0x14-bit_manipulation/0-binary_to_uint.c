#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer.
 *
 * Return: The converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int bit;
	int uno;

	if (b == NULL)
		return (0);

	for (uno = 0; b[uno] != '\0'; uno++)
	{
		if (b[uno] != '0' && b[uno] != '1')
			return (0);

		bit = b[uno] - '0';
		result = (result * 2) + bit;
	}

	return (result);
}
