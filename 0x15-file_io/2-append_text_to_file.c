#include "main.h"

/**
 * append_text_to_file - creates a file
 * @filename: the file to create
 * @text_content: text content
 * Return: 1 if success -1 if failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	op = open(filename, O_RDWR | O_APPEND);
	if (text_content == NULL)
	{
		if (op == 1)
			return (1);
		if (op == -1)
			return (-1);
	}
	wr = write(op, text_content, i);
	if (op == -1 || wr == -1)
		return (-1);

	close(op);
	return (1);
}
