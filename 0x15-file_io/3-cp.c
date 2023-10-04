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
	char *buf;
	int op, rd, wr;

	if (ac != 3)
	{
		dprintf("Usage: cp file_from file_to\n");
		exit(97);
	}
	op = open(av[1],O_RDONLY);
	if (op == -1)
	{
		dprintf("Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	rd = read(op, buf, BUFSIZE);
	if (rd == -1)
	{

	}
}
