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
	char *buf = malloc(sizeof(char) * letters);
	ssize_t r, size, file;

	if (filename == NULL || buf == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == NULL)
		return (0);

	r = read(file, buf, letters);

	size = write(STDOUT_FILENO, buf, r);
	if (file == -1 || r == -1 || size == -1)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(file);
	return (size);
}
