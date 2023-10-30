#include "main.h"

/**
 * append_text_to_file - creates a file
 * @filename: the file to create
 * @text_content: text content
 * Return: 1 if success -1 if failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int file, w, i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	file = open(filename, O_RDWR | O_APPEND);
	if (text_content == NULL)
	{
		if (file == 1)
			return (1);
		if (file == -1)
			return (-1);
	}
	w = write(file, text_content, i);
	if (file == -1 || w == -1)
		return (-1);

	close(file);
	return (1);
}
