#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: The name of the file
 * @letters: The number of letters
 *
 * Return: the actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int unof, bytes_read, bytes_written;
	char buffer[READ_BUF_SIZE];

	if (filename == NULL)
		return (0);

	unof = open(filename, O_RDONLY);
	if (unof == -1)
		return (0);

	bytes_read = read(unof, buffer, sizeof(buffer));
	if (bytes_read == -1)
	{
		close(unof);
		return (0);
	}

	if (bytes_read > (int)letters)
		bytes_read = (int)letters;

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		close(unof);
		return (0);
	}

	close(unof);
	return (bytes_written);
}
