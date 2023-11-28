#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @str: the string
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	if (!s)
		return (0);

	while (*s++)
		length++;
	return (length);
}

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: The name of the file
 * @text_content: The content to append to the file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_r_w = 0;
	ssize_t the_length = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (the_length)
		bytes_r_w = write(fd, text_content, the_length);
	close(fd);
	return (bytes_r_w == the_length ? 1 : -1);
}
