#include "main.h"

/**
 * main - main function of a program that copies
 * a file to another file
 * @ac: arguments count
 * @av: arguments vector
 * Return: 0
*/

int main(int ac, char **av)
{
	char *buf[BUFSIZE];
	int ffrom, fto, wr, c1, c2;
	ssize_t rd;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	ffrom = open(av[1],O_RDONLY);
	if (ffrom == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fto = open(av[2], O_WRONLY | O_CREAT | O_TRUNC);
	if (fto == -1)
	{

		exit(99);
	}
	while (rd = read(ffrom, buf, BUFSIZE) > 0)
	{
		if (write(fto, buf, rd) != rd)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	c1 = close(ffrom);
	c2 = close(fto);
	if (c1 == -1 )
	{
		dprintf(2, "Error: Can't close fd %d\n", ffrom);
		exit(100);
	}
	if (c2 == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fto);
		exit(100);
	}
	return (0);
}
