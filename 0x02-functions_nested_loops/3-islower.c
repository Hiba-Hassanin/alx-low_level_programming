#include "main.h"

/**
 *  _islower - checks for lowercase character
 *
 *  @c: checks the input
 *
 *  Return: if 'c' is lowercase return 1
 *          if not always return 0 (success)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
