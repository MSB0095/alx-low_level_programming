#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it to the POSIX standard output
 * @filename: the file to read
 * @letters: letters to read
 * Return: the actual number of letters it could read and print, or 0 if fail
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int dest, size;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);
	if (!filename)
		return (0);
	if (!buffer)
		return (0);
	dest = open(filename, O_RDONLY);
	size = write(STDOUT_FILENO, buffer, read(dest, buffer, letters));
	if (dest == -1 || size == -1)
		return (0);
	close(dest);
	free(buffer);
	return (size);
}
