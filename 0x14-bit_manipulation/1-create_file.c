#include "main.h"
#include <fcntl.h>
#include <sys/stat.h>
#include <string.h>

/**
 * _strlen - calculates the length of a string
 * @str: the string
 *
 * Return: the length of the string
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (str[length] != '\0')
		length++;

	return length;
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
	int fd, bytes_written;
	mode_t permissions = S_IRUSR | S_IWUSR; /* rw------- */

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, permissions);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, _strlen(text_content));
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

