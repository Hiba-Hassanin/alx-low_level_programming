#include "main.h"

/**
 * handle_error - Handles the error message
 * @code: The error code
 * @file: The name of the file
 */

void handle_error(int code, const char *file)
{
	switch (code)
	{
		case 97:
			fprintf(stderr, "Usage: cp file_from file_to\n");
			break;
		case 98:
			fprintf(stderr, "Error: Can't read from file %s\n", file);
			break;
		case 99:
			fprintf(stderr, "Error: Can't write to %s\n", file);
			break;
		case 100:
			fprintf(stderr, "Error: Can't close fd %s\n", file);
			break;
		default:
			break;
	}

	exit(code);
}

/**
 * copy_file - Copies the content of a file to another file
 * @file_from: The name of the first file
 * @file_to: The name of the second file
 *
 * Return: 0 on success
 */

int copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUF_SIZE];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		handle_error(98, file_from);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd_to == -1)
	{
		handle_error(99, file_to);
	}

	while ((bytes_read = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			handle_error(99, file_to);
		}
	}

	if (bytes_read == -1)
	{
		handle_error(98, file_from);
	}

	if (close(fd_from) == -1)
	{
		handle_error(100, file_from);
	}
	if (close(fd_to) == -1)
	{
		handle_error(100, file_to);
	}

	return (0);
}

/**
 * main - Entry point
 * @argc: The number of arguments
 * @argv: An array of argument
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		handle_error(97, NULL);
	}

	copy_file(argv[1], argv[2]);

	return (0);
}
