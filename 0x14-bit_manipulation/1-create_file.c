#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @str: the string
 *
 * Return: the length of the string
 */

int _strlen(char *str)
{
	int length = 0;

	if (!str)
		return (0);

	while (*str++)
		length++;
	return (length);
}

/**
 * create_file - a function that creates a file
 * @filename: The name of the file to create
 * @text_content: The content to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_r_w = 0, the_length = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (the_length)
		bytes_r_w = write(fd, text_content, the_length);
	close(fd);
	return (bytes_r_w == the_length ? 1 : -1);
}
