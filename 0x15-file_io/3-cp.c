#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

#define READ_BUF_SIZE 1024
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %s\n"

/**
 * main - entry point
 * @argc: the number of arguments
 * @argv: an array of argument
 * Return: 0 if successful
*/

int main(int argc, char **argv)
{
	int fd_from = 0, fd_to = 0;
	ssize_t bytes_r_w;
	char buffer[READ_BUF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, USAGE);
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, ERR_NOREAD, argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, ERR_NOWRITE, argv[2]);
		exit(99);
	}

	while ((bytes_r_w = read(fd_from, buffer, READ_BUF_SIZE)) > 0)
	{
		if (write(fd_to, buffer, bytes_r_w) != bytes_r_w)
		{
			dprintf(STDERR_FILENO, ERR_NOWRITE, argv[2]);
			exit(99);
		}
	}
	if (bytes_r_w == -1)
	{
		dprintf(STDERR_FILENO, ERR_NOREAD, argv[1]);
		exit(98);
	}

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

	return (EXIT_SUCCESS);
}
