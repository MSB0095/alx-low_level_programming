#include "main.h"
#define BUFSIZE 1024
/**
 * error_3 - handles errors
 * @fd: file descriptor
*/
void error_3(int fd)
{
		dprintf(STDERR_FILENO, "Error: can't close fd%d\n", fd);
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
 * @fd1: file descriptor
 * @filename: filename
*/
void error_1(int fd1, char *filename)
{
	int c1;

	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	c1 = close(fd1);
	if (c1 == -1)
	{
		error_3(fd1);
	}
	exit(98);
}
/**
 * error_2 - handles errors
 * @fd1: file descriptor
 * @fd2: file descriptor
 * @filename: filename
*/
void error_2(int fd1, int fd2, char *filename)
{
	int c1, c2;

	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	c1 = close(fd1);
	c2 = close(fd2);
	if (c1 == -1)
	{
		error_3(fd1);
	}
	if (c2 == -1)
	{
		error_3(fd2);
	}
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
	if (buffer == NULL)
		return (1);
	if (ac != 3)
	{
		error_0();
	}
	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
	{
		error_1(file_from, av[1]);
	}
	if (open(av[2], O_WRONLY) == -1)
		file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	else
		file_to = open(av[2], O_WRONLY | O_TRUNC);
	if (file_to == -1)
	{
		error_2(file_from, file_to, av[2]);
	}
	while ((rd = read(file_from, buffer, BUFSIZE)) > 0)
	{
		if (write(file_to, buffer, rd) != rd)
		{
			error_2(file_from, file_to, av[2]);
		}
	}
	free(buffer);
	return (0);
}
