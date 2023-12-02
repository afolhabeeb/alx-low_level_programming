#include "main.h"

/**
 * read_textfile - read a text file and print to a std POTIX out
 *
 * @filename: pointer ro file
 * @letters: number of letters read in file.
 *
 * Return: the content of the file to the standard output.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_desc;
	ssize_t nrd, nwr;
	char *buff;


	if (filename == NULL)
		return (0);

	file_desc = open(filename, O_RDONLY);

	if (file_desc == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	nrd = read(file_desc, buff, letters);
	nwr = write(STDOUT_FILENO, buff, nrd);

	close(file_desc);
	free(buff);

	return (nwr);
}

