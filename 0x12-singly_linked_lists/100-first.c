#include "lists.h"

void print_before_main(void) __attribute__((constructor));

/**
 * print_before_main - Prints a message before the main function
 *
 * Return: a string
*/

void print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
		   "I bore my house upon my back!\n");
}
