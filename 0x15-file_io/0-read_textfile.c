#include "main.h"

/**
 * read_textfile - reads a text file and
 *  prints it to the POSIX standard output.
 * @filename: 
 * @letters:
 * Return: the actual number of letters
 *  it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
		return (0);
	
	FILE *file;
	file = open(filename, O_RDONLY, STDIN_FILENO);

	if (file == NULL)
		return (0);

	char *buf = malloc(sizeof(char) * letters);


	ssize_t size = write(STDOUT_FILENO, (char *)buf, letters);
	free(buf);
	close(file);
	return (size);
}
