#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#define BUF_SIZE 1024
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %s\n"

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, USAGE);
		exit(97);
	}

	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUF_SIZE];

	/* Open the source file */
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, ERR_NOREAD, argv[1]);
		exit(98);
	}

	/* Open the destination file */
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, ERR_NOWRITE, argv[2]);
		exit(99);
	}

	/* Copy the contents from source to destination */
	while ((bytes_read = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, ERR_NOWRITE, argv[2]);
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, ERR_NOREAD, argv[1]);
		exit(98);
	}

	/* Close file descriptors */
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, ERR_NOCLOSE, argv[1]);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, ERR_NOCLOSE, argv[2]);
		exit(100);
	}

	return (0);
}
