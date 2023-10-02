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
	if (ac != 3)
	{
		dprintf("Usage: cp file_from file_to\n");
		exit(97);
	}
}
