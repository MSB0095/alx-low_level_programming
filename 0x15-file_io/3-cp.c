#include "main.h"
#define BUFSIZE 1024
/**
 * error_3 - handles errors
 * @file: file
*/
void error_3(int file)
{
	if (file != -1)
		close(file);
	dprintf(STDERR_FILENO, "Error: can't close fd%d\n", file);
	exit(100);
}
/**
 * error_0 - handles errors
*/
void error_0(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}
/**
 * error_1 - handles errors
 * @file_from: file_from
*/
void error_1(char *file_from)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
	exit(98);
}
/**
 * error_2 - handles errors
 * @file_to: file_to
*/
void error_2(char *file_to)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
	exit(99);
}
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
		error_0();
	}
	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
	{
		error_1(av[1]);
	}
	file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		error_2(av[2]);
		close(file_from);
	}
	while ((rd = read(file_from, buffer, BUFSIZE)) > 0)
	{
		if (write(file_to, buffer, rd) != rd)
		{
			error_2(av[1]);
			close(file_from);
		}
	}
	free(buffer);
	if (close(file_from) == -1)
	{
		error_3(file_from);
	}
	if (close(file_to) == -1)
	{
		error_3(file_to);
	}
	return (0);
}
