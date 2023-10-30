#include "main.h"

/**
 * read_textfile - reads a text file and
 *  prints it to the POSIX standard output.
 * @filename: file to write
 * @letters: number of letters
 * Return: the actual number of letters
 *  it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff = malloc(sizeof(char) * letters);
	ssize_t rd, wr, file;

	if (filename == NULL || buff == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	rd = read(file, buff, letters);
	wr = write(STDOUT_FILENO, buff, rd);
	if (file == -1 || rd == -1 || wr == -1)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(file);
	return (wr);
}
