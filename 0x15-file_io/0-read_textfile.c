#include "main.h"

/**
 * read_textfile - reads a file and prints to the POSIX standard output
 * @filename: The name of the file
 * @letters: The number of letters
 *
 * Return: The actual number of letters read and printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_r_w;
	char buffer[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bytes_r_w = read(fd, &buffer[0], letters);
	bytes_r_w = write(STDOUT_FILENO, &buffer[0], bytes_r_w);
	close(fd);
	return (bytes_r_w);
}
