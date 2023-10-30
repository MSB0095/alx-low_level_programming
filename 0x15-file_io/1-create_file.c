#include "main.h"

/**
 * create_file - creates a file
 * @filename: the file to create
 * @text_content: text content
 * Return: 1 if success -1 if failure
*/

int create_file(const char *filename, char *text_content)
{
	int file, wr, i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(file, text_content, i);
	if (file == -1 || wr == -1)
		return (-1);

	close(file);
	return (1);
}
