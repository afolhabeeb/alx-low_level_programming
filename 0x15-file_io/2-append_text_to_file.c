#include "main.h"

/**
 * append_text_to_file - append text at the end of a file.
 *
 * @filename: pointer to a file.
 * @text_content: the text content in the file.
 * Return: 1 for success and -1 for failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc, nwr, nletters;

	if (filename == NULL)
		return (-1);

	file_desc = open(filename, O_WRONLY | O_APPEND);

	if (file_desc == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;
		nwr = write(file_desc, text_content, nletters);

		if (nwr == -1)
			return (-1);
	}

	close(file_desc);
	return (1);
}
