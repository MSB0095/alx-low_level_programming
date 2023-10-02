#include "main.h"

/**
 * create_file - creates a file
 * @filename: the file to create
 * @text_content: text content
 * Return: 1 if success -1 if failure
*/

int create_file(const char *filename, char *text_content)
{
	int op, wr, i;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(op, text_content, i);
	if (op == -1 || wr == -1)
		return (0);

	close(op);
	return (1);
}
