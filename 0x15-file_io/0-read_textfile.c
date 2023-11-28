#include "main.h"
#include <fcntl.h>
#include <stdlib.h>

#define READ_BUF_SIZE 1024

/**
 * read_textfile - reads a file and prints to the POSIX standard output
 * @filename: The name of the file
 * @letters: The number of letters
 *
 * Return: The actual number of letters read and printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bytes_read, bytes_written;
	char buffer[READ_BUF_SIZE];

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		close(fd);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || (size_t)bytes_written != (size_t)bytes_read)
	{
		close(fd);
		return (0);
	}

	close(fd);
	return (bytes_written);
}
