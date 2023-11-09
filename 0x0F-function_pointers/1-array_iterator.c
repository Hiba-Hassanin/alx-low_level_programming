#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 *
 * @array: the array
 * @size: its size
 * @action: pointer
 *
 * Return: void
*/

void array_iterator(int *array, unsigned int size, void (*action)(int))
{
	unsigned int i;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
