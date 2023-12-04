#include "main.h"
#include <stdio.h>

/**
 * err_file - check if a file is opened and handles error
 *
 * @file_from: first file, the source file
 * @file_to: the destination file.
 * @argv: argument vector
 *
 * Return: no return value.
 */

void err_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - copy content of a file from one to another
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t nch, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	err_file(file_from, file_to, argv);

	nch = 1024;
	while (nch == 1024)
	{
		nch = read(file_from, buf, 1024);
		if (nch == -1)
			err_file(-1, 0, argv);
		nwr = write(file_to, buf, nch);
			if (nwr == -1)
			err_file(0, -1, argv);
	}

	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}

	return (0);
}
