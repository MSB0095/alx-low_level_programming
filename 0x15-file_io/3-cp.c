#include "main.h"
#define BUFSIZE 1024
/**
 * main - main function of a program that copies
 * a file to another file
 * @ac: arguments count
 * @av: arguments vector
 * Return: 0
*/

int main(int ac, char **av)
{
	char *buffer;
	int file_from, file_to;
	ssize_t rd;

	buffer = malloc(sizeof(char) * BUFSIZE);
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		close(file_from);
		exit(99);
	}
	while ((rd = read(file_from, buffer, BUFSIZE)) > 0)
	{
		if (write(file_to, buffer, rd) != rd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			close(file_from);
			exit(99);
		}
	}
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
