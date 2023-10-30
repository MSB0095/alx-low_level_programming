#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFSIZE 1024
/**
 * error_3 - handles errors
 * @file: file
*/
void error_3(int file)
{
	if (file != -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
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

	c1 = close(fd1);
	if (c1 == -1)
	{
		error_3(fd1);
	}
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);

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

	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);

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
	char *buffer[BUFSIZE];
	int file_from, file_to, c1, c2;
	ssize_t rd, wr;

	if (ac != 3)
	{
		error_0();
	}
	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
	{
		error_1(file_from, av[1]);
	}
	file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		error_2(file_from, file_to, av[2]);
	}
	while ((rd = read(file_from, buffer, BUFSIZE)) > 0)
	{
		wr = write(file_to, buffer, rd);
		if (wr != rd)
		{
			error_2(file_from, file_to, av[2]);
		}
	}
	if (rd == -1)
		error_1(file_from, av[1]);
	if (wr == -1)
		error_2(file_from, file_to, av[2]);
	c1 = close(file_from);
	c2 = close(file_to);
	if (c1 == -1)
		error_3(file_from);
	if (c2 == -1)
		error_3(file_to);
	return (0);
}
