#include "main.h"

/**
 * create_file - creates a file.
 *
 * @filename: pointer to the file.
 * @text_content: the text inside of the file created.
 *
 * Return: 1 on success and -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int file_desc, nwr, nletters;

	if (filename == NULL)
		return (-1);

	file_desc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_desc == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;
	nwr = write(file_desc, text_content, nletters);

	if (nwr == -1)
		return (-1);

	close(file_desc);

	return (1);


}
